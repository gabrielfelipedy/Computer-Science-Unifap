const express = require('express')
const { PrismaClient } = require('@prisma/client')
const cookieParser = require('cookie-parser')
const bycript = require('bcrypt')
const { createTokens, validateToken } = require("./JWT")

const app = express()
app.use(express.json())
app.use(cookieParser())

const prisma = new PrismaClient()

app.post('/registrar', async (req, res) => {
  const { name, password } = req.body

  await bycript.hash(password, 10).then((hash) => {
    prisma.user.create({
      data: {
        name,
        password: hash
      }
    }).then(()=> {
      res.json("User created")
    }).catch(err => {
      res.json({err: "Something went wrong"});
    })
  })
})

app.post('/login', async (req, res) => {
  const { name, password } = req.body;
  const user = await prisma.user.findFirst({
    where: { name }
  })

  if(!user) {
    res.status(404).json({error: "User not found"})
  }

  const pPassdw = user.password
  bycript.compare(password, pPassdw).then(match => {
    if(!match) {
      res.json({error: "Incorrect password"})
    }
    else {
      const acessToken = createTokens(user)
      res.cookie("acess-token", acessToken, {
        httpOnly: false
      })
      res.json("Logged In")
    }
  })
})

app.get('/perfil', validateToken, (req, res) => {
  res.json("Entrou no perfil");
})

app.listen(8080, ()=> {
  console.log('Running on port 8080')
})
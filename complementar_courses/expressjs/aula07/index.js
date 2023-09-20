const express = require('express')
const { PrismaClient } = require('@prisma/client')
const cookieParser = require('cookie-parser')
const bycript = require('bcrypt')

const app = express()
app.use(express.json())
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
      res.json("Logged In")
    }
  })
})

app.get('/perfil', async (req, res) => {
  res.json("Login")
})

app.listen(8080, ()=> {
  console.log('Running on port 8080')
})
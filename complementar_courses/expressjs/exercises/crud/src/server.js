const { createTokens, validateToken } = require('./jwt.js')

const bcrypt = require('bcrypt');
const cookieParser = require('cookie-parser');
const express = require('express');
const { PrismaClient } = require('@prisma/client');

const app = express();
app.use(express.json());
app.use(cookieParser());

const prisma = new PrismaClient();

app.post('/registrar', async (req, res) => {
  const { username, password } = req.body;

  await bcrypt.hash(password, 10).then(hash => {

    prisma.user.create({
      data: {
        username,
        password: hash
      }
    }).then(() => {
       res.status(200).json("User created");
    }).catch(() => {
      res.status(500).json({ err: "Something went wrong :(" });
    })
  });
});

app.post('/login', async (req, res) => {
  const { username, password } = req.body;
  const user = await prisma.user.findUnique({
    where: { username }
  })

  if(!user) {
    res.status(404).json({ err: "User not found" })
  }

  const pPasswd = user.password;
  bcrypt.compare(password, pPasswd)
  .then(match => {
      if(!match) {
        res.status(401).json({ err: "Incorect password "})
      }
      else {
        const acessToken = createTokens(user);
        res.cookie("acess-token", acessToken, {
          httpOnly: false
        })
        res.status(200).json("Logged In");
      }
  });
});

app.get('/perfil', validateToken, (req, res) => {
  res.status(200).json("Entrou no perfil :D");
});

app.listen(8080, () => {
  console.log("Running on port 8080")
});

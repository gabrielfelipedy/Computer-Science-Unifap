// 1 - npm init -y
// 2 - npm i express
// 3 - 

const express = require('express');
const { PrismaClient } = require('@prisma/client');

const app = express();
app.use(express.json());

const prisma = new PrismaClient();

app.post("/post", async (req, res) => {
    const { id, email, name } = req.body;

    const userExists = await prisma.user.findFirst({
        where: {
            email,
        }
    })

    if(userExists) {
        
    }

    let user = {}
    try {
        user = await prisma.user.create({
            data: {
                id, 
                email,
                name,
            }
        })
    }
    catch(error) {
        console.log(`Error: ${error}`)
    }

    const msg = user == {} ? "User created" : "Error, invalid request";

    res.json({Mensagem: msg, user});
})

app.get("/get", async (req, res) => {
    const users = await prisma.user.findMany()
    res.json(users)
})

app.listen(8080, () => {
    console.log("Server runnnig on port 8080");
})
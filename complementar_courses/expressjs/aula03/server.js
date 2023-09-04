const express = require('express')
const app = express()

app.use(express.json())

const PORT = 8080
const users = []

app.get('/', (req, res)=> {
    res.json({Users: users})
})

app.post('/users', (req, res) => {
    const user = req.body

    let msg = ""
    if(user.idade < 18) {
        msg = "Cadastrado com sucesso (menor de idade)"
    }
    else {
        msg = "Cadastrado comm sucersso (maior de idade)"
    }

    users.push(user)
    res.send(msg)
})

app.listen(PORT, ()=> {
    console.log(`Listening on port ${PORT}`)
})
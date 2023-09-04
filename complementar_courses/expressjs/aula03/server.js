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
    users.push(user)
    res.json({User: users})
})

app.listen(PORT, ()=> {
    console.log(`Listening on port ${PORT}`)
})
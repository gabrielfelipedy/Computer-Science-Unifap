const express = require('express')
const app = express()

app.get('/ola', (request, response) => {
    response.json({Hello: "World"})
})

app.listen(3030, v => {
    console.log("Server running on port 3030");
})
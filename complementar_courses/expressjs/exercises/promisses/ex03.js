const people = [
  {
    id: 1,
    name: "Gabriel",
    cash: 180.00
  },
  {
    id: 2,
    name: "Lucas",
    cash: 150.00
  },
  {
    id: 3,
    name: "Kelvin",
    cash: -3000.00
  }
]

function process(people, id) {
  return new Promise((resolve, reject) => {

    if(!id) {
      reject(people)
    }

    people.forEach(person => {
      if(person.id == id) {
        if(person.cash > 0) resolve('Saldo positivo')
        else resolve('Saldo negativo')
      }
    })
  })
  .then(result => console.log(result))
  .catch(err => console.log(err))
  
}

process(people, 3)
const people = [
  {
    name: "Gabriel",
    age: 18
  },
  {
    name: "Lucas",
    age: 15
  },
  {
    name: "Kelvin",
    age: 30
  }
]

function process(people) {
  return new Promise((resolve, reject) => {
    if(!people) {
      reject("Error, empty or non avaliable people")
    }

    let legalAges = 0
    people.forEach(person => {
      if(person.age >= 18) legalAges++
    })

    if(legalAges == 0) {
      reject("No legal of ages in this list")
    }

    resolve(`There're ${legalAges} people legal of age`)
  })
  .then(result => console.log(result))
  .catch(err => console.log(err))
}

process(people)
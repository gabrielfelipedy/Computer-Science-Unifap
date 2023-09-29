const fruits = ["Maça", "Abacate", "Laranja", "Bacuri"]
const fruits_without_m = ["Abacaxi", "Uva", "Limão"]

function checkFruits(fruits) {
  return new Promise((resolve, reject) => {
    if(!fruits) {
      reject("Error. No fruits")
    }

    fruits.forEach(fruit => {
      if(fruit[0].toLowerCase() == 'm') {
        resolve("The list contains a fruit that starts with m")
      }
    });

    resolve("The list doesn't conhtains any fruit with m")
  })
  .then(result => console.log(result))
  .catch(err => console.log(err))
}

checkFruits(fruits)
checkFruits(fruits_without_m)

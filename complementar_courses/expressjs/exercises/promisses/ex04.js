const people = [
  { name: "Gabriel" , age: 18 },
  { name: "Lucas"   , age: 19 },
  { name: "Antonio" , age: 18 },
  { name: "Fabricio", age: 17}
]

function oldest(people) {
  return new Promise((resolve, reject) => {
    setTimeout(()=> {
      if(!people) {
        reject("Error. no people")
      }

      let oldest = people[0]

      people.forEach(person => {
        if(person.age > oldest.age) oldest = person
      });

      resolve(oldest)
    }, 500);
  })
    .then(result => console.log(result))
    .catch(err => console.log(err))
}

function youngest(people) {
  return new Promise((resolve, reject) => {
    setTimeout(()=> {
      if(!people) {
        reject("Error. no people")
      }

      let youngest = people[0]

      people.forEach(person => {
        if(person.age < youngest.age) youngest = person
      });

      resolve(youngest)
    }, 500);
  })
    .then(result => console.log(result))
    .catch(err => console.log(err))
}

console.log(oldest(people));
console.log(youngest(people));

const movies = [
  {
    name: "Caes de Aluguel",
    gender: "crime"
  },
  {
    name: "Bastardos Inglórios",
    gender: "guerra"
  },
  {
    name: "Vingadores Ultimato",
    gender: "super herói"
  },
  {
    name: "Duro de matar",
    gender: "crime"
  }
]

module.exports = {
  removeDuplicated(arr) {
    let unique = []
    arr.forEach(el => {
      if(!unique.includes(el)) {
        unique.push(el)
      }
    });

    return unique.sort();
  },

  filterStates(arr) {
    let s_states = []

    arr.forEach(el => {
      if(el[0].toLowerCase() === 's') {
        s_states.push(el)
      }
    })

    return s_states
  },

  biggerAnd2ndBigger(arr) {
    arr.sort()
    let bigger = arr[arr.length - 1], secbigger

    let i = arr.length - 2
    while(arr[i] == bigger) i--;

    secbigger = arr[i]

    return { bigger, secbigger }
  },

  filterMovies(movies) {
    return new Promise((resolve, reject) => {
      
      setTimeout(() => {
        let moviesFiltered = movies.filter(el => el.gender == "crime");

        if(!movies) {
          reject("Error, no movies")
        }

      resolve(moviesFiltered)
      }, 500)
    })
  },

  movies
}
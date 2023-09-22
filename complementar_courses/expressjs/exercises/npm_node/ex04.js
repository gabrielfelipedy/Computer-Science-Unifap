const { movies, filterMovies } = require('./modules')

console.log(filterMovies(movies).then(result => console.log(result)).catch(err => console.log(err)))
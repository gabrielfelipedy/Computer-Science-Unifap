const { filterStates } = require('./modules')

let arr = ["state", "off", "on", "staging", "testing", "starting"]
console.log(filterStates(arr))
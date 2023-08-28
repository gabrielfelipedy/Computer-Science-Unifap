const obj = {
	value1: 2,
	value2: -5,
	value3: 0
}

const keys = Object.keys(obj)
var key = ""

keys.forEach((el) => {
	if(obj[el] == 0)
		key = el
})

console.log(key)

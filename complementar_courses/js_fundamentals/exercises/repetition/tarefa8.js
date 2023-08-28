const arr = [1, 3, 2, 4]
const pares = []
const impares = []

arr.forEach((el) => {
	if(el % 2 == 0)
		pares.push(el)
	else
		impares.push(el)
})

console.log(pares)
console.log(impares)

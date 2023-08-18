const arr = [1, 7, 20, -7, 2]

var menor = Number.POSITIVE_INFINITY
arr.forEach((el) => {
	if(el < menor) {
		menor = el
	}
})

console.log(menor)

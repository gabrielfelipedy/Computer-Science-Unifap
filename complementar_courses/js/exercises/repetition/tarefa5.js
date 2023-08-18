const arr = [1, 7, 20, -7, 2]

var maior = Number.NEGATIVE_INFINITY
arr.forEach((el) => {
	if(el > maior) {
		maior = el
	}
})

console.log(maior)

const arr = [1, 2, 3, 4, 5, 6]

const sumEvenSquares = (arr) => {
	let sum = 0
	arr.forEach((el) => {
		if(el % 2 == 0)
			sum += (el*el)
	})

	return sum
}

console.log(sumEvenSquares(arr))

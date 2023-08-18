const arr = [1, 2, 3, 4, 5]

const sumSquares = (arr) => {
	let sum = 0
	arr.forEach((el) => {
		sum += (el*el)
	})

	return sum
}

console.log(sumSquares(arr))

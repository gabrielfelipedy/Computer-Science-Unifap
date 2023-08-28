const arr = [10, 2, 1, 10, 30]

const sumArray = (arr) => {
	let sum = 0
	arr.forEach((el) => {
		sum += el
	})
	return sum
}

console.log(sumArray(arr))

const doub = (a) => { return 2*a }
const doubleArray = (array, f) => {
	let copy = array.map(f)
	return copy
}

const arr = [1, 2, 3, 4, 5]
console.log(doubleArray(arr, doub))

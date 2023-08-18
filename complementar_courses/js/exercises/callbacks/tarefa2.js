const doub = (a) => { return 2*a }
const doubleArray = (array, f) => {
	let copy = array.slice()
	for(let i = 0; i < copy.length; i++) {
		copy[i] = f(copy[i])
	}
	return copy
}

const arr = [1, 2, 3, 4, 5]
console.log(doubleArray(arr, doub))

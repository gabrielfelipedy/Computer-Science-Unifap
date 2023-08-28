const obj1 = {}
const obj2 = {
	prop: "Not empty"
}

const isEmptyObj = (obj) => {
	return Object.entries(obj).length == 0
}

console.log(isEmptyObj(obj1))
console.log(isEmptyObj(obj2))

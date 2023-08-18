const sum = (a, b) => { return a+b }
const multi = (a, b) => { return a*b }

function showR(a, b, f) {
	console.log(f(a, b))
}

showR(2, 6, sum)
showR(2, 6, multi)

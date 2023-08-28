const arr = ["first_el", "second_el", "third_el"]
const firstLetters = []

arr.forEach((el) => {
	firstLetters.push(el.slice(0, 1))
})

console.log(firstLetters)

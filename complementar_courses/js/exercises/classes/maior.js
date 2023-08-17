const readline = require('readline')

const rl = readline.createInterface({ 
	input: process.stdin, 
	output: process.stdout 
})

const maior = (a, b) => {
	return a > b ? a : b
}

rl.question('Enter a number: ', (num1) => {
	rl.question('Enter another number: ', (num2) => {
		let a = parseInt(num1)
		let b = parseInt(num2)
		console.log(`The biggest value is ${maior(a, b)}`)
		rl.close()
	})
})

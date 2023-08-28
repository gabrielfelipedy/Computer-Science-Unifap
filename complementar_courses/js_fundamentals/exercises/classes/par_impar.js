const readline = require('readline')

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
})

rl.question("Enter a number: ", (num) => {
	let a = parseInt(num)
	if(a % 2 == 0)
		console.log(`${a} é par`)
	else 
		console.log(`${a} não é par`)
	rl.close()
})

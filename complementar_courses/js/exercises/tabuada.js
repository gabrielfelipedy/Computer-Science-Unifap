const readline = require('readline')

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
})


var a = 0

rl.question('Enter a number: ', (num) => {
	a = parseInt(num)

	console.log(`TABUDADA DO ${a}\n`)

	for(let i = 1; i <= 10; i++) {
		console.log(`${a} x ${i} = ${a*i}`)
	}
	rl.close()
})
 

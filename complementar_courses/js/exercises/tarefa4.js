// This exercises require readline module
// Do npm i readline to install it

const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

rl.question('Type a number: ', (line) => {
	let n = parseInt(line)
	console.log(`O antecessor de ${n} é ${n-1}`)
	console.log(`O sucessor de ${n} é ${n+1}`)
	rl.close()
});

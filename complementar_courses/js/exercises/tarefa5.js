// This exercises require readline module
// Do npm i readline to install it

const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

var discount = 5

rl.question('Type a number: ', (line) => {
	let n = parseInt(line)
	let nWithDis = n * (1-(discount/100))
	console.log(`${n} com ${discount}% de desconto vale ${nWithDis}`)
	rl.close()
});

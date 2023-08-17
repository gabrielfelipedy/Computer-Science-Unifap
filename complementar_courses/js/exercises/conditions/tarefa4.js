// This exercises require readline module
// Do npm i readline to install it

const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

rl.question('Digite o seu ano de nascimento: ', (line) => {
	let year = parseInt(line)
	let idade = 2023 - year

	if(idade < 16) {
		console.log("Não pode votar")
	}
	else {
		console.log("Pode votar")
	}
	rl.close()
});

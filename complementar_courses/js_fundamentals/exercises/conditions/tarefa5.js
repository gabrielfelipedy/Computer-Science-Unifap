// This exercises require readline module
// Do npm i readline to install it

const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

var pswd = 1234

rl.question('Digite a sua senha: ', (line) => {
	let token = parseInt(line)

	if(pswd != token) {
		console.log("ACESSO NEGADO")
	}
	else {
		console.log("ACESSO PERMITIDO")
	}
	rl.close()
});

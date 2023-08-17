// This exercises require readline module
// Do npm i readline to install it

const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

rl.question('Digite o código (1 - Comum, 2 - Gerente, 3 - Diretor): ', (line) => {
	let code = parseInt(line)

	switch(code) {
		case 1:
			console.log("É comum")
			break;
		case 2:
			console.log("É gerente")
			break;
		case 3:
			console.log("É diretor")
			break;
		default:
			console.log("Código inválido")
	}
	rl.close()
});

// This exercises require readline module
// Do npm i readline to install it

const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

rl.question('Type your weight: ', (line) => {
    let weight = parseFloat(line)

    rl.question('Type your height: ', (line) => {
        let height = parseFloat(line)

	let imc = weight / (height * height)
	console.log(`O IMC é ${imc}`)

	    if(imc < 18.5) {
		console.log("MAGREZA")
	    }
	    else if(imc >= 18.5 && imc <= 24.9) {
		    console.log("NORMAL")
	    }
	    else if(imc >= 25 && imc <= 29.9) {
		    console.log("SOBREPESO")
	    }
	    else if(imc >= 30 && imc <= 39.9) {
		    console.log("OBESIDADE")
	    }
	    else {
		    console.log("OBESIDADE GRAVE")
	    }

        rl.close()
    });
});

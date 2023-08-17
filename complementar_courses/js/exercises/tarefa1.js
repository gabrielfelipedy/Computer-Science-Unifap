const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

rl.question('Digite seu nome: ', (line) => {
    let name = line

    rl.question('Digite a sua idade: ', (line) => {
        let idade = parseInt(line)

        rl.question('Digite true, se é casado(a): ', (line) => {
            let casado = (line.toLowerCase() == "true") ? true : false


	    let state = casado ? "casado(a)" : "solteiro(a)"

	    console.log("\nInformations\n")
	    console.log(`Nome: ${name}`)
	    console.log(`Idade: ${idade}`)
	    console.log(`Estado civil: ${state}`)
            rl.close()
        });
    });
});

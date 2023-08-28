// This exercises require readline module
// Do npm i readline to install it

const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

rl.question('Type a number: ', (line) => {
    let n1 = parseInt(line)

    rl.question('Type another number: ', (line) => {
        let n2 = parseInt(line)

        rl.question('Type another number: ', (line) => {
	        let n3 = parseInt(line)

		let sorted = [n1, n2, n3].sort((a, b) => {
			return a - b
		})
		

		console.log(`Maior: ${sorted[2]}`)
		console.log(`Meio: ${sorted[1]}`)
		console.log(`Menor: ${sorted[0]}`)

		rl.close()
        });
    });
});

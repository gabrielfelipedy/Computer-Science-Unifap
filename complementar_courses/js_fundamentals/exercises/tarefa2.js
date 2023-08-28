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

	    rl.question('Type another number: ', (line) => {
		let n4 = parseInt(line)
		let media = (n1+n2+n3+n4)/4
		console.log(`A media vale ${media}`)
		rl.close()
	    });
        });
    });
});

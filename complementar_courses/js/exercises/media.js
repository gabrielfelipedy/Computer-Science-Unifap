const readline = require('readline')

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
})

var media = 0

const getInput = (iteration) => {
	rl.question("Enter a number: ", (num) => {
		let a = parseInt(num)
		media += a

		if(iteration < 2) {
			getInput(iteration+1)
		}
		else {
			let result = media / (iteration + 1)
			console.log(`The media is ${result}`)
			rl.close()
		}

	})
}

getInput(0)

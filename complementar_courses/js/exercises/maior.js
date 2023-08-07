import * as readline from 'node:readline'
import { stdin as input, stdout as output } from 'node:process'

const rl = readline.createInterface({ input, output })

const maior = (a, b) => {
	return a > b ? a : b
}

var a = 0
var b = 0

rl.setPrompt(`Type a number: `)
rl.prompt()
rl.on('line', (num) => {
	a = num
	rl.close()
})

rl.setPrompt(`Type another number: `)
rl.prompt()
rl.on('line', (num) => {
	b = num
	rl.close()
})

console.log(`The biggest value is ${maior(a, b)}`)

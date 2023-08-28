// To test it, include <script src="script.js"></script> in a HTML file

const qtde = 5
var sum = 0
var media = 0

for(let i = 0; i < qtde; i++) {
	let aux = prompt("Type a value: ")
	sum += aux
}

media = sum / qtde
console.log(`Soma: ${sum}\nMédia: ${media}`)

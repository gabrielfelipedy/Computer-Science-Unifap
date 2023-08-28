const carros = {
	marcas: [
		"Fiat", 
		"Chevrolet", 
		"Ford", 
		"Volkswagen"
	]
}

const R = []

carros.marcas.forEach((el) => {
	if(el[0].toLowerCase() == 'f')
		R.push(el)
})

console.log(R)

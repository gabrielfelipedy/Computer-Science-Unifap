const ListaDeCompras = {
	produtos: {
		mortadela: 10.00,
		acai: 18.00,
		farinha: 14.00
	}
}

const sumPrices = (obj) => {
	let sum = 0

	Object.values(ListaDeCompras.produtos).forEach((el) => {
		sum += el
	})

	return sum
}

console.log(sumPrices(ListaDeCompras))

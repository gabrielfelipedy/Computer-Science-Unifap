const ListaDeCompras = {
	produtos: [
		{name: "café", price: 2.00},
		{name: "açúcar", price: 4.00},
		{name: "pão", price: 2.00}
	]
}

var sum = 0
let arr = ListaDeCompras.produtos
arr.forEach((el) => {
	sum += el.price
})

console.log(sum)

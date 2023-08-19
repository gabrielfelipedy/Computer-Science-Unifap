const usuario = {
	id: 1,
	nome: 'Marcos',
	email: 'marcos@mail.com'
}

async function request(obj, f) {
	await new Promise((resolve) => {
		setTimeout(() => {
			resolve()
		}, 1000,)
	}).then(() => {
		f(obj)
	}).catch((e) => {
		console.log(`Error: ${e}`)
	})
}

const showObj = (obj) => {
	Object.entries(obj).forEach((prop) => {
		console.log(`${prop[0]}: ${prop[1]}`)
	})
}

request(usuario, showObj)

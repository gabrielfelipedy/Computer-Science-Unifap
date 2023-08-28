const usuario = {
	id: 1,
	nome: 'Marcos',
	email: 'marcos@mail.com'
}

const showObj = (obj) => {
	let r = ""

	Object.entries(obj).forEach((prop) => {
		r+=`${prop[0]}: ${prop[1]}\n`
	})

	return r
}

async function request(obj, f) {
	await new Promise((resolve, reject) => {
		setTimeout(() => {
			if(!obj) {
				reject(new Error('Empty Object'))
			}
			resolve(f(obj))
		}, 1000,)
	})
	.then(result => console.log(result))
	.catch(error => console.log(error))
}

request(usuario, showObj)

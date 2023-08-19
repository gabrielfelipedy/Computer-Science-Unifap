const usuario = {
	id: 1,
	nome: 'Marcos',
	email: 'marcos@mail.com'
}

function request(obj, f) {
	return new Promise((resolve, reject) => {
		setTimeout(() => {
			if(!obj) {
				reject(new Error('Empty Object'))
			}
			resolve(f(obj))
		}, 1000,)
	})
}

const showObj = (obj) => {
	let r = ""

	Object.entries(obj).forEach((prop) => {
		r+=`${prop[0]}: ${prop[1]}\n`
	})

	return r
}

request(usuario, showObj)
.then(result => console.log(result))
.catch(error => console.log(error))

const usuario = {
	id: 1,
	nome: 'Marcos',
	email: 'marcos@mail.com'
}

function request(obj) {
	return new Promise((resolve, reject) => {
		setTimeout(() => {
			if(!obj) {
				reject(new Error('Empty Object'))
			}
			resolve(showObj(obj))
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

request(usuario)
.then(result => console.log(result))
.catch(error => console.log(error))

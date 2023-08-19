const myPromise = new Promise((resolve, reject) => {
	setTimeout(() => {
		const rNumber = Math.random()
		if(rNumber > 0.5)
			resolve(rNumber)
		else
			reject(new Error('rNumber error'))
	}, 1000)
})

myPromise.then(r => console.log(r)).catch(e => console.log(e))

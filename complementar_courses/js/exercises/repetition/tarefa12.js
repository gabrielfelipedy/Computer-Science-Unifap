const obj = {
	names: [
		"Gabriel Felipe", 
		"Gabriel Luna", 
		"Gabriel Malaquias", 
		"Gabriel Medeiros"
	],

	getLargestName() {
		let s = ""
		this.names.forEach((el) => {
			if(el.length > s.length)
				s = el
		})
		return s
	}
}

console.log(obj.getLargestName())

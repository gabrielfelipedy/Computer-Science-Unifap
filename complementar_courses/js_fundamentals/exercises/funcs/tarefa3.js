const str = ["string1", "string2", "str3", "str4"]

const newStr = []

const strFunc = (strings) => {
	strings.forEach((str) => {
		if(str.length > 5)
			newStr.push(str)
	})
}

strFunc(str)
console.log(newStr)

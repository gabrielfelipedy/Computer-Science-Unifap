module.exports = {
  removeDuplicated(arr) {
    let unique = []
    arr.forEach(el => {
      if(!unique.includes(el)) {
        unique.push(el)
      }
    });

    return unique.sort();
  }
}
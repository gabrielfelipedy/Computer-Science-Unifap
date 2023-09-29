const buying_list = ["Avocado", "Milk", "Meat"]

function checkItem(buying_list, item) {
  return new Promise((resolve, reject) => {

    if(!buying_list || !item) {
      reject("Error. Missing arguments")
    }

    if(buying_list.includes(item)) {
      resolve("Product has been found in the list")
    }
    else {
      resolve("Product not found int the list")
    }
  })
  .then(result => console.log(result))
  .catch(result => console.log(result))
}

checkItem(buying_list, "Cheese")
checkItem(buying_list, "Milk")

// Write a javascript program that converts temperatures between Celsius and Fahrenheit. The user should input the temperature and its unit (C or F), and the program should convert it to the other unit.

let n = [5,1,1,2,2,4]
let num = +n[0]
let arr = []
for(let i = 1; i < n.length ; i++){
    arr += n[i]
  
}
console.log(arr)
let store = "";
let count = 0
for(let i=0; i<arr.length; i++){
    if(arr[i] === arr[i+1]){
        // store +=  arr[i]
        count++;
        // console.log(store)
    }
    // console.log(store)
}


// Q2: Check if a number is even or odd.
// Input: A single integer
// Output: "Even" or "Odd"

// Write your solution here



function checkEvenOdd(num) {

    if(num % 2 === 0) {
        return "Even";
    } else {
        return "Odd";
    }
};

console.log(checkEvenOdd(4)); // Output: "Even"
console.log(checkEvenOdd(7)); // Output: "Odd"



const readline = require('readline');
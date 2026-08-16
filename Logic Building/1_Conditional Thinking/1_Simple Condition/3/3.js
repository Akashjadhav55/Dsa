// Q3: Check if a number is divisible by 5.
// Input: A single integer
// Output: "Divisible by 5" or "Not divisible by 5"

// Write your solution here

const readline = require("readline").createInterface({ input: process.stdin });
readline.on("line", (line) => {
  const n = parseInt(line.trim());

  if(n%5===0){
    console.log("Number is Divisble By 5");
  }else{
    console.log("Number is Not Divisble By 5");
  }
  readline.close();
});

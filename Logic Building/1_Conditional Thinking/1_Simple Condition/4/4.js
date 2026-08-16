// Q4: Check if a number is divisible by both 3 and 5.
// Input: A single integer
// Output: "Divisible by both 3 and 5" or "Not divisible by both"

// Write your solution here

const readline = require("readline").createInterface({ input: process.stdin });
readline.on("line", (line) => {
    const n = parseInt(line.trim());
    
    if(n%3==0 && n%5==0){
        console.log("Divisible by both 3 and 5");
    }else{
        console.log("Not divisible by both");
    }

    readline.close();
})
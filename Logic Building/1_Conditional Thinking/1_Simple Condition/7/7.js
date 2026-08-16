// Q7: Take three numbers and print the largest.
// Input: Three integers
// Output: The largest number

// Write your solution here

const readline = require("readline").createInterface({ input : process.stdin});
readline.on("line", (line) => {
    const [a, b, c] = line.trim().split(" ").map(Number)

    if(a >= b & a >= c){
        console.log(a);
    }else if(b >= a & b >= c){
        console.log(b);
    }else if(c >= a & c >= b){
        console.log(c);
    }

    readline.close();
})


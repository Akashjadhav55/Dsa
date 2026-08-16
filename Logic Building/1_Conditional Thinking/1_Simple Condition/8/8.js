// Q8: Take a temperature value and print "Cold", "Warm", or "Hot" using range conditions.
// Input: A temperature (integer)
// Output: "Cold" (if <15), "Warm" (if 15-30), or "Hot" (if >30)

// Write your solution here


const readline = require("readline").createInterface({ input: process.stdin });
readline.on("line", (line) => {
    const n = parseInt(line.trim());

    if(n <= 15 ){
        console.log("Cold");
    }else if(n >= 15 && n <= 30){
        console.log("Warm");
    }else{
        console.log("Hot");
    }

    readline.close();
})
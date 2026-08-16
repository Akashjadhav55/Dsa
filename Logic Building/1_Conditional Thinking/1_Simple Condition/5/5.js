// Q5: Check if a given year is a leap year.
// Input: A year (integer)
// Output: "Leap Year" or "Not a Leap Year"

// Write your solution here

const readline = require("readline").createInterface({ input : process.stdin});
readline.on("line", (line) => {
    const n = parseInt(line.trim());

    if((n%4===0 && n%100!==0) || (n%400===0)){
        console.log("Leap Year");
    }else {
        console.log("Not a Leap Year");
    }
    readline.close();
})


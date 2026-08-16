// Q6: Take two numbers and print the larger one.
// Input: Two integers
// Output: The larger number

// Write your solution here



const readline = require("readline").createInterface({ input: process.stdin });
readline.on("line", (line) => {
    const [a, b] = line.trim().split(" ").map(Number);
    console.log(a > b ? a : b);
    readline.close();
})
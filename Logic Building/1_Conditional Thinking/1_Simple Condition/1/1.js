// Q1: Take a number and print whether it's positive, negative, or zero.
// Input: A single integer
// Output: "Positive", "Negative", or "Zero"

const readline = require("readline");
const rl = readline.createInterface({ input: process.stdin, output: process.stdout });

rl.question("Enter a number: ", (input) => {
  const num = Number(input);
  if (num > 0) console.log("Positive");
  else if (num < 0) console.log("Negative");
  else console.log("Zero");
  rl.close();
});
// Q1: Take a string input and print its length.
// Input: A string
// Output: Length of the string

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    console.log(line.length);
    rl.close();
});

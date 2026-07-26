// Q2: Print the first and last character of a string.
// Input: A string
// Output: First and last character

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    console.log(line[0] + " " + line[line.length - 1]);
    rl.close();
});

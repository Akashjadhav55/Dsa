// Q2: Remove all spaces from a string.
// Input: A string
// Output: String without spaces

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    console.log(line.replace(/ /g, ''));
    rl.close();
});

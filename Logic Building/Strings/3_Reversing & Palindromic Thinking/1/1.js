// Q1: Reverse a string without using built-in reverse.
// Input: A string
// Output: Reversed string

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let rev = '';
    for (let i = line.length - 1; i >= 0; i--) {
        rev += line[i];
    }
    console.log(rev);
    rl.close();
});

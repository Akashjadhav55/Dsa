// Q1: Remove all vowels from a string.
// Input: A string
// Output: String without vowels

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let result = '';
    for (let c of line) {
        if (!'aeiouAEIOU'.includes(c)) result += c;
    }
    console.log(result);
    rl.close();
});

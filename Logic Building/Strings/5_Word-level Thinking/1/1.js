// Q1: Print each word of a sentence on a new line.
// Input: A sentence
// Output: Each word on a new line

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    for (let w of words) {
        console.log(w);
    }
    rl.close();
});

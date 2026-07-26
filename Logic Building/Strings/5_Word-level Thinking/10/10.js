// Q10: Remove extra spaces between words.
// Input: A sentence
// Output: Sentence with single spaces

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    console.log(line.trim().split(/\s+/).join(' '));
    rl.close();
});

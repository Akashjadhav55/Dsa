// Q2: Count how many words have even length.
// Input: A sentence
// Output: Count of even-length words

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    let count = 0;
    for (let w of words) {
        if (w.length % 2 === 0) count++;
    }
    console.log(count);
    rl.close();
});

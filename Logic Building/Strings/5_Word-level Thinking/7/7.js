// Q7: Count how many words contain the letter 'a'.
// Input: A sentence
// Output: Count of words containing 'a'

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    let count = 0;
    for (let w of words) {
        if (w.toLowerCase().includes('a')) count++;
    }
    console.log(count);
    rl.close();
});

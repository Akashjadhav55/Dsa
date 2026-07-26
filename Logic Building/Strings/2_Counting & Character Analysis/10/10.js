// Q10: Count how many words end with 's'.
// Input: A sentence
// Output: Count of words ending with 's'

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    let count = 0;
    for (let w of words) {
        if (w[w.length - 1] === 's') count++;
    }
    console.log(count);
    rl.close();
});

// Q6: Count words that start and end with the same letter.
// Input: A sentence
// Output: Count of such words

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.toLowerCase().split(' ');
    let count = 0;
    for (const w of words) {
        if (w.length > 0 && w[0] === w[w.length - 1]) count++;
    }
    console.log(count);
    rl.close();
});

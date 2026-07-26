// Q6: Print all words that start and end with the same letter.
// Input: A sentence
// Output: Words starting and ending with same letter

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    for (let w of words) {
        if (w[0].toLowerCase() === w[w.length - 1].toLowerCase()) {
            console.log(w);
        }
    }
    rl.close();
});

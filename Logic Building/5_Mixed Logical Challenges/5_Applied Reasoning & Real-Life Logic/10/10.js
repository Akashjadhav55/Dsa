// Q10: Print all palindromic words from a sentence.
// Input: A sentence
// Output: Palindromic words

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    for (const w of line.split(' ')) {
        if (w === w.split('').reverse().join('')) console.log(w);
    }
    rl.close();
});

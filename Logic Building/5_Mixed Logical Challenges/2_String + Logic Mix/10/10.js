// Q10: Remove duplicate words from a sentence.
// Input: A sentence
// Output: Sentence without duplicate words

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const seen = new Set();
    const result = [];
    for (const w of line.split(' ')) {
        if (!seen.has(w)) {
            seen.add(w);
            result.push(w);
        }
    }
    console.log(result.join(' '));
    rl.close();
});

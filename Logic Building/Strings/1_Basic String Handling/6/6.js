// Q6: Count how many words are in a sentence.
// Input: A sentence
// Output: Word count

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const trimmed = line.trim();
    if (trimmed === '') console.log(0);
    else console.log(trimmed.split(/\s+/).length);
    rl.close();
});

// Q3: Reverse the order of words in a sentence.
// Input: A sentence
// Output: Words in reverse order

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    console.log(words.reverse().join(' '));
    rl.close();
});

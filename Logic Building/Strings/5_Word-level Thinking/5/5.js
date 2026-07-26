// Q5: Swap first and last words in a sentence.
// Input: A sentence
// Output: Sentence with swapped first and last words

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    if (words.length >= 2) {
        [words[0], words[words.length - 1]] = [words[words.length - 1], words[0]];
    }
    console.log(words.join(' '));
    rl.close();
});

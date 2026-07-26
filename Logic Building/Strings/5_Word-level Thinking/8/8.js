// Q8: Capitalize the first letter of each word.
// Input: A sentence
// Output: Sentence with capitalized first letters

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    for (let i = 0; i < words.length; i++) {
        words[i] = words[i][0].toUpperCase() + words[i].substring(1).toLowerCase();
    }
    console.log(words.join(' '));
    rl.close();
});

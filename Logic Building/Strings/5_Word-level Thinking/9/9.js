// Q9: Print the sentence in title case.
// Input: A sentence
// Output: Title case sentence

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

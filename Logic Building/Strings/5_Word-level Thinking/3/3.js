// Q3: Find the longest word in a sentence.
// Input: A sentence
// Output: The longest word

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    let longest = words[0];
    for (let w of words) {
        if (w.length > longest.length) longest = w;
    }
    console.log(longest);
    rl.close();
});

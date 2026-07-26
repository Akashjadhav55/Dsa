// Q9: Print how many words start with a vowel.
// Input: A sentence
// Output: Count of words starting with a vowel

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    let count = 0;
    for (let w of words) {
        const first = w[0].toLowerCase();
        if ('aeiou'.includes(first)) count++;
    }
    console.log(count);
    rl.close();
});

// Q9: Find the word with maximum vowels in a sentence.
// Input: A sentence
// Output: Word with most vowels

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.split(' ');
    let maxWord = '', maxCount = 0;
    for (const w of words) {
        let count = 0;
        for (const c of w.toLowerCase()) {
            if ('aeiou'.includes(c)) count++;
        }
        if (count > maxCount) { maxCount = count; maxWord = w; }
    }
    console.log(maxWord);
    rl.close();
});

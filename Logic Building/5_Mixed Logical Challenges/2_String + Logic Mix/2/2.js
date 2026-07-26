// Q2: Count vowels in each word of a sentence.
// Input: A sentence
// Output: Vowel count per word

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.split(' ');
    for (const w of words) {
        let count = 0;
        for (const c of w.toLowerCase()) {
            if ('aeiou'.includes(c)) count++;
        }
        console.log(w + ': ' + count);
    }
    rl.close();
});

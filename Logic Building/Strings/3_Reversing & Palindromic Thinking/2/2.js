// Q2: Reverse each word in a sentence.
// Input: A sentence
// Output: Sentence with each word reversed

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.split(' ');
    for (let i = 0; i < words.length; i++) {
        let rev = '';
        for (let j = words[i].length - 1; j >= 0; j--) {
            rev += words[i][j];
        }
        process.stdout.write(rev + ' ');
    }
    console.log();
    rl.close();
});

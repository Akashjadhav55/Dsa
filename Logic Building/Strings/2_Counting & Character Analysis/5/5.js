// Q5: Count how many spaces are there in a sentence.
// Input: A sentence
// Output: Space count

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let count = 0;
    for (let c of line) {
        if (c === ' ') count++;
    }
    console.log(count);
    rl.close();
});

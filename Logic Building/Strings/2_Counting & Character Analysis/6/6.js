// Q6: Count how many times a given character appears in a string.
// Input: A string and a character
// Output: Frequency of the character

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 2) {
        let count = 0;
        for (let c of lines[0]) {
            if (c === lines[1]) count++;
        }
        console.log(count);
        rl.close();
    }
});

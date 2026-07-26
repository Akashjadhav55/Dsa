// Q5: Count how many characters (excluding spaces) are in the string.
// Input: A string
// Output: Character count excluding spaces

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let count = 0;
    for (let c of line) {
        if (c !== ' ') count++;
    }
    console.log(count);
    rl.close();
});

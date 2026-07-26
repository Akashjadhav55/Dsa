// Q8: Remove the first and last character and print remaining.
// Input: A string
// Output: String without first and last character

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    if (line.length <= 2) console.log("");
    else console.log(line.substring(1, line.length - 1));
    rl.close();
});

// Q7: Take two strings and print them concatenated.
// Input: Two strings
// Output: Concatenated string

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 2) {
        console.log(lines[0] + lines[1]);
        rl.close();
    }
});

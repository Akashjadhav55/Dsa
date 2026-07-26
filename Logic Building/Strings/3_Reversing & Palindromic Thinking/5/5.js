// Q5: Check if two strings are the reverse of each other.
// Input: Two strings
// Output: "Yes" or "No"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 2) {
        let rev = '';
        for (let i = lines[1].length - 1; i >= 0; i--) {
            rev += lines[1][i];
        }
        console.log(lines[0] === rev ? "Yes" : "No");
        rl.close();
    }
});

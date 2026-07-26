// Q8: Check if two strings are rotations of each other.
// Input: Two strings
// Output: "Yes" or "No"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 2) {
        if (lines[0].length !== lines[1].length) {
            console.log("No");
        } else {
            console.log((lines[0] + lines[0]).includes(lines[1]) ? "Yes" : "No");
        }
        rl.close();
    }
});

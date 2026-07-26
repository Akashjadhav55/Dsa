// Q4: Reverse an array in-place.
// Input: Size n, then n integers
// Output: Reversed array

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        lines[1].reverse();
        console.log(lines[1].join(' '));
        rl.close();
    }
});

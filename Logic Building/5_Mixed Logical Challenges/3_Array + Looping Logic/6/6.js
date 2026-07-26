// Q6: Count how many elements are even at an even index.
// Input: Size n, then n integers
// Output: Count

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        let count = 0;
        lines[1].forEach((v, i) => {
            if (i % 2 === 0 && v % 2 === 0) count++;
        });
        console.log(count);
        rl.close();
    }
});

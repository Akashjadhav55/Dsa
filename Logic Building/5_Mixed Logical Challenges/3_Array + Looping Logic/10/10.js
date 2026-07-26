// Q10: Find the sum of all elements at odd indices.
// Input: Size n, then n integers
// Output: Sum of elements at odd indices

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        let sum = 0;
        lines[1].forEach((v, i) => { if (i % 2 !== 0) sum += v; });
        console.log(sum);
        rl.close();
    }
});

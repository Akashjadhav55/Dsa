// Q8: Find the second largest element in an array.
// Input: Size n, then n integers
// Output: Second largest element

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const unique = [...new Set(lines[1])].sort((a, b) => b - a);
        console.log(unique[1]);
        rl.close();
    }
});

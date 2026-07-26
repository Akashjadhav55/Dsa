// Q1: Find the maximum and minimum element in an array.
// Input: Size n, then n integers
// Output: Maximum and minimum

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const arr = lines[1];
        console.log('Maximum:', Math.max(...arr));
        console.log('Minimum:', Math.min(...arr));
        rl.close();
    }
});

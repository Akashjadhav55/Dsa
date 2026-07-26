// Q9: Rotate an array by one position to the right.
// Input: Size n, then n integers
// Output: Right-rotated array

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const arr = lines[1];
        arr.unshift(arr.pop());
        console.log(arr.join(' '));
        rl.close();
    }
});

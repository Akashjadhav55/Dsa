// Q3: Print all unique elements from an array.
// Input: Size n, then n integers
// Output: Unique elements

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const arr = lines[1];
        const result = arr.filter((v, i) => arr.indexOf(v) === arr.lastIndexOf(v));
        console.log(result.join(' '));
        rl.close();
    }
});

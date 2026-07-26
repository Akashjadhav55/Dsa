// Q3: Print all subarrays of a given array.
// Input: Size n, then n integers
// Output: All possible subarrays

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const arr = lines[1];
        for (let i = 0; i < arr.length; i++) {
            for (let j = i; j < arr.length; j++) {
                console.log(JSON.stringify(arr.slice(i, j + 1)));
            }
        }
        rl.close();
    }
});

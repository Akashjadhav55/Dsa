// Q5: Shift all zeros to the end of the array.
// Input: Size n, then n integers
// Output: Array with zeros at end

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const arr = lines[1];
        const nonZero = arr.filter(v => v !== 0);
        while (nonZero.length < arr.length) nonZero.push(0);
        console.log(nonZero.join(' '));
        rl.close();
    }
});

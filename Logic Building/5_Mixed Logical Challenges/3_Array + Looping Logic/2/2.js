// Q2: Count how many positive, negative, and zero elements are in an array.
// Input: Size n, then n integers
// Output: Count of each

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        let pos = 0, neg = 0, zero = 0;
        for (const v of lines[1]) {
            if (v > 0) pos++;
            else if (v < 0) neg++;
            else zero++;
        }
        console.log('Positive:', pos);
        console.log('Negative:', neg);
        console.log('Zero:', zero);
        rl.close();
    }
});

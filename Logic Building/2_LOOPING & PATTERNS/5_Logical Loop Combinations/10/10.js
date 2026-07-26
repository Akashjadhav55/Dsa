// Q10: Take 5 numbers as input. If user enters 0, skip it. Print sum of all non-zero numbers.
// Input: 5 integers
// Output: Sum of non-zero numbers

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(parseInt(line));
    if (lines.length === 5) {
        const sum = lines.reduce((acc, val) => val !== 0 ? acc + val : acc, 0);
        console.log(sum);
        rl.close();
    }
});

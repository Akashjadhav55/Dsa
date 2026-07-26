// Q3: Print all numbers between a and b divisible by 7.
// Input: Two integers a and b
// Output: Numbers between a and b divisible by 7

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 2) {
        const a = parseInt(lines[0]);
        const b = parseInt(lines[1]);
        for (let i = a; i <= b; i++) {
            if (i % 7 === 0) console.log(i);
        }
        rl.close();
    }
});

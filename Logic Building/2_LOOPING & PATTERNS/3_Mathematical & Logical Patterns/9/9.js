// Q9: Print first n terms of an arithmetic progression (a, d).
// Input: First term a and common difference d, and n terms
// Output: First n terms of the AP

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 3) {
        const a = parseInt(lines[0]);
        const d = parseInt(lines[1]);
        const n = parseInt(lines[2]);
        const result = [];
        for (let i = 0; i < n; i++) {
            result.push(a + i * d);
        }
        console.log(result.join(" "));
        rl.close();
    }
});

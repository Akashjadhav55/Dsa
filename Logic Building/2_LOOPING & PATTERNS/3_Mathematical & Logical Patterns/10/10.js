// Q10: Print first n terms of a geometric progression (a, r).
// Input: First term a and common ratio r, and n terms
// Output: First n terms of the GP

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 3) {
        let a = parseInt(lines[0]);
        const r = parseInt(lines[1]);
        const n = parseInt(lines[2]);
        const result = [];
        for (let i = 0; i < n; i++) {
            result.push(a);
            a *= r;
        }
        console.log(result.join(" "));
        rl.close();
    }
});

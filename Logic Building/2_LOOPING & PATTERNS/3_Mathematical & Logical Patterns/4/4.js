// Q4: Find HCF (GCD) of two numbers using loops.
// Input: Two integers
// Output: GCD of the two numbers

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 2) {
        let a = parseInt(lines[0]);
        let b = parseInt(lines[1]);
        while (b !== 0) {
            const temp = b;
            b = a % b;
            a = temp;
        }
        console.log(a);
        rl.close();
    }
});

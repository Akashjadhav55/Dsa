// Q5: Find LCM of two numbers using loops.
// Input: Two integers
// Output: LCM of the two numbers

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 2) {
        const a = parseInt(lines[0]);
        const b = parseInt(lines[1]);
        let max = Math.max(a, b);
        while (true) {
            if (max % a === 0 && max % b === 0) {
                console.log(max);
                break;
            }
            max++;
        }
        rl.close();
    }
});

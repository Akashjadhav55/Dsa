// Q15: Print binary alternating pattern (1, 01, 101, 0101).
// Input: An integer n
// Output: Binary alternating pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        let row = "";
        for (let j = 0; j < i; j++) {
            row += (i + j) % 2 === 0 ? "1" : "0";
        }
        console.log(row);
    }
    rl.close();
});

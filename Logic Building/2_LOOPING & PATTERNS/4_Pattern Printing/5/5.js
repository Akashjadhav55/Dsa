// Q5: Print an increasing triangle of stars.
// Input: An integer n
// Output: Triangle with 1 star in row 1, 2 in row 2, etc.

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log("*".repeat(i));
    }
    rl.close();
});

// Q4: Print a square of stars (n x n).
// Input: An integer n
// Output: n x n grid of stars

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 0; i < n; i++) {
        console.log("*".repeat(n));
    }
    rl.close();
});

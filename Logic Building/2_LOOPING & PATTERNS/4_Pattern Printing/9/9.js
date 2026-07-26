// Q9: Print a centered pyramid of stars.
// Input: An integer n
// Output: Centered pyramid pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log(" ".repeat(n - i) + "*".repeat(2 * i - 1));
    }
    rl.close();
});

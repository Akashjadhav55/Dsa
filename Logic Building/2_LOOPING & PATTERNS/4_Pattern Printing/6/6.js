// Q6: Print a right-aligned triangle of stars.
// Input: An integer n
// Output: Right-aligned triangle with leading spaces

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log(" ".repeat(n - i) + "*".repeat(i));
    }
    rl.close();
});

// Q22: Print diamond star pattern.
// Input: An integer n
// Output: Diamond shape with stars

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log(" ".repeat(n - i) + "*".repeat(2 * i - 1));
    }
    for (let i = n - 1; i >= 1; i--) {
        console.log(" ".repeat(n - i) + "*".repeat(2 * i - 1));
    }
    rl.close();
});

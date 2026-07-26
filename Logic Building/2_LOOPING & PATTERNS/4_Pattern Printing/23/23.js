// Q23: Print hourglass star pattern.
// Input: An integer n
// Output: Hourglass shape with stars

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = n; i >= 1; i--) {
        console.log(" ".repeat(n - i) + "*".repeat(2 * i - 1));
    }
    for (let i = 2; i <= n; i++) {
        console.log(" ".repeat(n - i) + "*".repeat(2 * i - 1));
    }
    rl.close();
});

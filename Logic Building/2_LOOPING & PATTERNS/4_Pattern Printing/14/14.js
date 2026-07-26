// Q14: Print single digit repeating pattern (1, 11, 111, 1111).
// Input: An integer n
// Output: Repeating digit pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log("1".repeat(i));
    }
    rl.close();
});

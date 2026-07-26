// Q8: Print stars in odd numbers (1, 3, 5, 7, 9).
// Input: An integer n
// Output: Rows with 1, 3, 5... stars

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 0; i < n; i++) {
        console.log("*".repeat(2 * i + 1));
    }
    rl.close();
});

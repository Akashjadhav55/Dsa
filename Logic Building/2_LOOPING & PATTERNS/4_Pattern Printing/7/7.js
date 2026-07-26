// Q7: Print stars in even numbers (2, 4, 6, 8, 10).
// Input: An integer n
// Output: Rows with 2, 4, 6... stars

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log("*".repeat(2 * i));
    }
    rl.close();
});

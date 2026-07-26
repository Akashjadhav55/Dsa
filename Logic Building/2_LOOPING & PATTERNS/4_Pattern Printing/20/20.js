// Q20: Print number triangle (1, 12, 123, 1234, 12345).
// Input: An integer n
// Output: Number triangle pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        let row = "";
        for (let j = 1; j <= i; j++) {
            row += j;
        }
        console.log(row);
    }
    rl.close();
});

// Q25: Print number pyramid (1, 232, 34543, 4567654).
// Input: An integer n
// Output: Number pyramid pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        let row = " ".repeat(n - i);
        for (let j = 0; j < i; j++) {
            row += (i + j);
        }
        for (let j = i - 2; j >= 0; j--) {
            row += (i + j);
        }
        console.log(row);
    }
    rl.close();
});

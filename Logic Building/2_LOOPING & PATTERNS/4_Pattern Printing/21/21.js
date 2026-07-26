// Q21: Print palindromic number triangle (1, 21, 321, 4321).
// Input: An integer n
// Output: Decreasing number triangle

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        let row = "";
        for (let j = i; j >= 1; j--) {
            row += j;
        }
        console.log(row);
    }
    rl.close();
});

// Q24: Print hollow diamond star pattern.
// Input: An integer n
// Output: Hollow diamond with stars

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        let row = " ".repeat(n - i);
        for (let j = 0; j < 2 * i - 1; j++) {
            row += (j === 0 || j === 2 * i - 2) ? "*" : " ";
        }
        console.log(row);
    }
    for (let i = n - 1; i >= 1; i--) {
        let row = " ".repeat(n - i);
        for (let j = 0; j < 2 * i - 1; j++) {
            row += (j === 0 || j === 2 * i - 2) ? "*" : " ";
        }
        console.log(row);
    }
    rl.close();
});

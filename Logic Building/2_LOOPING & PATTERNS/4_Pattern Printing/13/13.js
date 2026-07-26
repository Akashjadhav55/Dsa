// Q13: Print consecutive numbers pattern (1, 23, 456, 78910).
// Input: An integer n
// Output: Continuous number pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let num = 1;
    for (let i = 1; i <= n; i++) {
        let row = "";
        for (let j = 0; j < i; j++) {
            row += num;
            num++;
        }
        console.log(row);
    }
    rl.close();
});

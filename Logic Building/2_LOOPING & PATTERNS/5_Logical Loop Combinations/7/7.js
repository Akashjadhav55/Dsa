// Q7: Print a pattern where each row i prints i*i.
// Input: An integer n
// Output: Pattern of squares

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log(i * i);
    }
    rl.close();
});

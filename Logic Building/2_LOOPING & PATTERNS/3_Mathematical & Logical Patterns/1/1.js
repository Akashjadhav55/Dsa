// Q1: Print the squares of numbers from 1 to n.
// Input: An integer n
// Output: Squares of 1 to n

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log(i * i);
    }
    rl.close();
});

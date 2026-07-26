// Q1: Print all numbers between 1 and N that are divisible by both 3 and 5.
// Input: An integer N
// Output: Numbers divisible by 15

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        if (i % 3 === 0 && i % 5 === 0) {
            console.log(i);
        }
    }
    rl.close();
});

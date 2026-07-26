// Q8: Print factorial of each number from 1 to n.
// Input: An integer n
// Output: Factorials of 1 to n

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let fact = 1;
    for (let i = 1; i <= n; i++) {
        fact *= i;
        console.log(`${i}! = ${fact}`);
    }
    rl.close();
});

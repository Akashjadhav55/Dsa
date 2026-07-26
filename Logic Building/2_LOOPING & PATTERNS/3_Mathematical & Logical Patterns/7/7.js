// Q7: Find the sum of all factors of a number.
// Input: An integer
// Output: Sum of all factors

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let sum = 0;
    for (let i = 1; i <= n; i++) {
        if (n % i === 0) sum += i;
    }
    console.log(sum);
    rl.close();
});

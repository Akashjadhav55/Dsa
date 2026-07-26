// Q6: Print the sum of first n natural numbers.
// Input: An integer n
// Output: Sum of 1+2+...+n

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let sum = 0;
    for (let i = 1; i <= n; i++) {
        sum += i;
    }
    console.log(sum);
    rl.close();
});

// Q8: Print the sum of all odd numbers up to n.
// Input: An integer n
// Output: Sum of all odd numbers from 1 to n

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let sum = 0;
    for (let i = 1; i <= n; i += 2) {
        sum += i;
    }
    console.log(sum);
    rl.close();
});

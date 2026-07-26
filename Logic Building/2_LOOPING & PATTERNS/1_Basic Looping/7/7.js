// Q7: Print the sum of all even numbers up to n.
// Input: An integer n
// Output: Sum of all even numbers from 2 to n

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let sum = 0;
    for (let i = 2; i <= n; i += 2) {
        sum += i;
    }
    console.log(sum);
    rl.close();
});

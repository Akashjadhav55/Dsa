// Q2: Find the sum of digits of a number (use loop).
// Input: An integer
// Output: Sum of digits

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let num = parseInt(line);
    let sum = 0;
    while (num > 0) {
        sum += num % 10;
        num = Math.floor(num / 10);
    }
    console.log(sum);
    rl.close();
});

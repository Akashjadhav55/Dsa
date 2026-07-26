// Q4: Find the sum of digits of a number.
// Input: An integer
// Output: Sum of digits

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let n = parseInt(line);
    let sum = 0;
    while (n !== 0) {
        sum += n % 10;
        n = Math.floor(n / 10);
    }
    console.log(sum);
    rl.close();
});

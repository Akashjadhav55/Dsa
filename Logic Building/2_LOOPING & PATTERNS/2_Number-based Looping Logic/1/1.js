// Q1: Count the number of digits in a given number.
// Input: An integer
// Output: Number of digits

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let n = parseInt(line);
    let count = 0;
    if (n === 0) count = 1;
    while (n !== 0) {
        count++;
        n = Math.floor(n / 10);
    }
    console.log(count);
    rl.close();
});

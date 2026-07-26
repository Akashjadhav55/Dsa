// Q10: Print sum of first n terms of Fibonacci series.
// Input: An integer n
// Output: Sum of first n Fibonacci numbers

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let a = 0, b = 1, sum = 0;
    for (let i = 0; i < n; i++) {
        sum += a;
        const temp = a + b;
        a = b;
        b = temp;
    }
    console.log(sum);
    rl.close();
});

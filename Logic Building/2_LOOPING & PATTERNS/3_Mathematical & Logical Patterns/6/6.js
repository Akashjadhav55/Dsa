// Q6: Print all factors of a given number.
// Input: An integer
// Output: All factors of the number

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        if (n % i === 0) console.log(i);
    }
    rl.close();
});

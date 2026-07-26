// Q5: Print the table of a given number (n x 1 to n x 10).
// Input: An integer n
// Output: Multiplication table of n

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= 10; i++) {
        console.log(`${n} x ${i} = ${n * i}`);
    }
    rl.close();
});

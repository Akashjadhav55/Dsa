// Q9: Print the factorial of a given number.
// Input: An integer n
// Output: n! (factorial)

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let fact = 1;
    for (let i = 1; i <= n; i++) {
        fact *= i;
    }
    console.log(fact);
    rl.close();
});

// Q5: Find the factorial of a number using recursion.
// Input: An integer n
// Output: n!

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });

function factorial(n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

rl.on('line', (line) => {
    console.log(factorial(parseInt(line)));
    rl.close();
});

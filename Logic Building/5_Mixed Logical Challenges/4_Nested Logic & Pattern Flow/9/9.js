// Q9: Generate Fibonacci series up to N using recursion.
// Input: An integer N
// Output: Fibonacci series up to N

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });

function fibonacci(n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

rl.on('line', (line) => {
    const limit = parseInt(line);
    const result = [];
    let i = 0;
    while (true) {
        const val = fibonacci(i);
        if (val > limit) break;
        result.push(val);
        i++;
    }
    console.log(result.join(' '));
    rl.close();
});

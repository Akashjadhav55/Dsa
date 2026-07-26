// Q9: Print Fibonacci series up to n terms.
// Input: An integer n
// Output: First n Fibonacci numbers

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let a = 0, b = 1;
    const result = [];
    for (let i = 0; i < n; i++) {
        result.push(a);
        const temp = a + b;
        a = b;
        b = temp;
    }
    console.log(result.join(" "));
    rl.close();
});

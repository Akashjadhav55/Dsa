// Q10: Print stars and spaces alternating.
// Input: An integer n
// Output: Alternating star-space pattern in pyramid shape

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log(" ".repeat(n - i) + "* ".repeat(i));
    }
    rl.close();
});

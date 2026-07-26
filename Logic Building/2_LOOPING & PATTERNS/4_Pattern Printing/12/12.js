// Q12: Print repeated numbers per row (1, 22, 333, 4444, 55555).
// Input: An integer n
// Output: Repeated number pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        console.log(String(i).repeat(i));
    }
    rl.close();
});

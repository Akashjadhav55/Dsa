// Q17: Print repeated alphabet per row (A, BB, CCC, DDDD).
// Input: An integer n
// Output: Repeated alphabet pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 0; i < n; i++) {
        console.log(String.fromCharCode(65 + i).repeat(i + 1));
    }
    rl.close();
});

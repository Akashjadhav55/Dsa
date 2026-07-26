// Q3: Print n stars on same line.
// Input: An integer n
// Output: n stars on one line

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    console.log("*".repeat(n));
    rl.close();
});

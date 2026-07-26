// Q8: Print Pascal's triangle up to N rows.
// Input: An integer N
// Output: Pascal's triangle

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 0; i < n; i++) {
        let val = 1;
        const row = [];
        for (let j = 0; j <= i; j++) {
            row.push(val);
            val = val * (i - j) / (j + 1);
        }
        console.log(row.join(' '));
    }
    rl.close();
});

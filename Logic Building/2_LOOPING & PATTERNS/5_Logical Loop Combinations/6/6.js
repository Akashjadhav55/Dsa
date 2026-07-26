// Q6: Print all numbers from 1-n whose binary representation has an even number of 1s.
// Input: An integer n
// Output: Numbers with even set bits

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        const count = i.toString(2).split("1").length - 1;
        if (count % 2 === 0) console.log(i);
    }
    rl.close();
});

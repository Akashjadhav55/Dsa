// Q6: Print frequency of each digit in a number.
// Input: An integer
// Output: Frequency of digits 0-9

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const freq = Array(10).fill(0);
    for (const c of line.trim()) {
        freq[parseInt(c)]++;
    }
    for (let i = 0; i < 10; i++) {
        if (freq[i] > 0) console.log(`${i} : ${freq[i]}`);
    }
    rl.close();
});

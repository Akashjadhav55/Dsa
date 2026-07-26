// Q6: Check if a number is a perfect number.
// Input: An integer
// Output: "Perfect Number" or "Not a Perfect Number"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let sum = 0;
    for (let i = 1; i < n; i++) {
        if (n % i === 0) sum += i;
    }
    console.log(sum === n ? "Perfect Number" : "Not a Perfect Number");
    rl.close();
});

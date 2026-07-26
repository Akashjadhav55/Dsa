// Q10: Check if a number is perfect (sum of factors equals number).
// Input: An integer
// Output: "Perfect Number" or "Not a Perfect Number"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const num = parseInt(line);
    let sum = 0;
    for (let i = 1; i < num; i++) {
        if (num % i === 0) sum += i;
    }
    console.log(sum === num ? "Perfect Number" : "Not a Perfect Number");
    rl.close();
});

// Q5: Check if a number is an Armstrong number.
// Input: An integer
// Output: "Armstrong Number" or "Not an Armstrong Number"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let n = parseInt(line);
    const original = n;
    let sum = 0;
    const digits = String(n).length;
    while (n !== 0) {
        const d = n % 10;
        sum += Math.pow(d, digits);
        n = Math.floor(n / 10);
    }
    console.log(sum === original ? "Armstrong Number" : "Not an Armstrong Number");
    rl.close();
});

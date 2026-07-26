// Q3: Check if a number is an Armstrong number.
// Input: An integer
// Output: "Armstrong Number" or "Not an Armstrong Number"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const num = parseInt(line);
    let temp = num;
    let digits = String(num).length;
    let sum = 0;
    while (temp > 0) {
        const d = temp % 10;
        sum += Math.pow(d, digits);
        temp = Math.floor(temp / 10);
    }
    console.log(sum === num ? "Armstrong Number" : "Not an Armstrong Number");
    rl.close();
});

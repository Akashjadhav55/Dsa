// Q8: Check if a number is a strong number (sum of factorials of digits = number).
// Input: An integer
// Output: "Strong Number" or "Not a Strong Number"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let n = parseInt(line);
    const original = n;
    let sum = 0;
    while (n !== 0) {
        const digit = n % 10;
        let fact = 1;
        for (let i = 1; i <= digit; i++) fact *= i;
        sum += fact;
        n = Math.floor(n / 10);
    }
    console.log(sum === original ? "Strong Number" : "Not a Strong Number");
    rl.close();
});

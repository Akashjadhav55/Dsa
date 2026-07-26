// Q8: Check if a number is prime or not.
// Input: An integer
// Output: "Prime" or "Not Prime"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    if (n <= 1) {
        console.log("Not Prime");
    } else {
        let isPrime = true;
        for (let i = 2; i * i <= n; i++) {
            if (n % i === 0) {
                isPrime = false;
                break;
            }
        }
        console.log(isPrime ? "Prime" : "Not Prime");
    }
    rl.close();
});

// Q7: Print all prime numbers between 1 and N.
// Input: An integer N
// Output: All primes from 1 to N

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 2; i <= n; i++) {
        let isPrime = true;
        for (let j = 2; j <= Math.sqrt(i); j++) {
            if (i % j === 0) { isPrime = false; break; }
        }
        if (isPrime) console.log(i);
    }
    rl.close();
});

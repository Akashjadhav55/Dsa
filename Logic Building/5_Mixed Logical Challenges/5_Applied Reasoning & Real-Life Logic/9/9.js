// Q9: Count how many prime numbers are there in an array.
// Input: Size n, then n integers
// Output: Count of primes

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });

function isPrime(n) {
    if (n < 2) return false;
    for (let i = 2; i <= Math.sqrt(n); i++) {
        if (n % i === 0) return false;
    }
    return true;
}

const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const count = lines[1].filter(v => isPrime(v)).length;
        console.log(count);
        rl.close();
    }
});

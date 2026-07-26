// Q9: Print the sum of all odd digits and even digits separately in a number.
// Input: An integer
// Output: Sum of odd digits and sum of even digits

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let n = parseInt(line);
    let oddSum = 0, evenSum = 0;
    while (n !== 0) {
        const digit = n % 10;
        if (digit % 2 === 0) evenSum += digit;
        else oddSum += digit;
        n = Math.floor(n / 10);
    }
    console.log(`Sum of odd digits: ${oddSum}`);
    console.log(`Sum of even digits: ${evenSum}`);
    rl.close();
});

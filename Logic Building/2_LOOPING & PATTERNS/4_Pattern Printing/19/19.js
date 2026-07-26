// Q19: Print alphabet pyramid (A, ABA, ABCBA, ABCDCBA).
// Input: An integer n
// Output: Palindrome alphabet pyramid

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 0; i < n; i++) {
        let row = " ".repeat(n - i - 1);
        for (let j = 0; j <= i; j++) {
            row += String.fromCharCode(65 + j);
        }
        for (let j = i - 1; j >= 0; j--) {
            row += String.fromCharCode(65 + j);
        }
        console.log(row);
    }
    rl.close();
});

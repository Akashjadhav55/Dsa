// Q3: Check if a number is a palindrome.
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let n = parseInt(line);
    const original = n;
    let reversed = 0;
    while (n !== 0) {
        reversed = reversed * 10 + n % 10;
        n = Math.floor(n / 10);
    }
    console.log(original === reversed ? "Palindrome" : "Not a Palindrome");
    rl.close();
});

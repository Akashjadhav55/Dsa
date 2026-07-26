// Q9: Check if a number is palindrome (121 -> true).
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const num = parseInt(line);
    let temp = num, rev = 0;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = Math.floor(temp / 10);
    }
    console.log(num === rev ? "Palindrome" : "Not a Palindrome");
    rl.close();
});

// Q4: Check whether a string is a palindrome.
// Input: A string
// Output: "Palindrome" or "Not a Palindrome"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let isPalin = true;
    for (let i = 0; i < Math.floor(line.length / 2); i++) {
        if (line[i] !== line[line.length - 1 - i]) {
            isPalin = false;
            break;
        }
    }
    console.log(isPalin ? "Palindrome" : "Not a Palindrome");
    rl.close();
});

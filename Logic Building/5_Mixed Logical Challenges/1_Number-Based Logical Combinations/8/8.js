// Q8: Print the reverse of a number (123 -> 321).
// Input: An integer
// Output: Reversed number

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let num = parseInt(line);
    let rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num = Math.floor(num / 10);
    }
    console.log(rev);
    rl.close();
});

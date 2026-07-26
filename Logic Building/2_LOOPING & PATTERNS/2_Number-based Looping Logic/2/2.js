// Q2: Print the reverse of a given number.
// Input: An integer
// Output: Reversed number

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let n = parseInt(line);
    let reversed = 0;
    while (n !== 0) {
        reversed = reversed * 10 + n % 10;
        n = Math.floor(n / 10);
    }
    console.log(reversed);
    rl.close();
});

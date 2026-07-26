// Q6: Count how many even digits a number contains.
// Input: An integer
// Output: Count of even digits

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let num = parseInt(line);
    let count = 0;
    while (num > 0) {
        if ((num % 10) % 2 === 0) count++;
        num = Math.floor(num / 10);
    }
    console.log(count);
    rl.close();
});

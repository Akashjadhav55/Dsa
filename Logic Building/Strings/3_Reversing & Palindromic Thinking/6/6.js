// Q6: Print the middle character(s) of a string.
// Input: A string
// Output: Middle character(s)

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const len = line.length;
    if (len % 2 === 0) {
        console.log(line[len / 2 - 1] + line[len / 2]);
    } else {
        console.log(line[Math.floor(len / 2)]);
    }
    rl.close();
});

// Q7: Print the second half of the string in reverse.
// Input: A string
// Output: Second half reversed

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const mid = Math.floor(line.length / 2);
    let rev = '';
    for (let i = line.length - 1; i >= mid; i--) {
        rev += line[i];
    }
    console.log(rev);
    rl.close();
});

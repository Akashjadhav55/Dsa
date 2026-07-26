// Q4: Convert all characters of a string to lowercase.
// Input: A string
// Output: Lowercase string

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    console.log(line.toLowerCase());
    rl.close();
});

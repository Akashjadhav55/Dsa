// Q3: Convert all characters of a string to uppercase.
// Input: A string
// Output: Uppercase string

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    console.log(line.toUpperCase());
    rl.close();
});

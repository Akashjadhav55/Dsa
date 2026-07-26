// Q9: Print the ASCII value of each character in a string.
// Input: A string
// Output: ASCII values

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let result = '';
    for (let c of line) {
        result += c.charCodeAt(0) + ' ';
    }
    console.log(result.trim());
    rl.close();
});

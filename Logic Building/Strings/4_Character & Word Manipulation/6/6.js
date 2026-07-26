// Q6: Remove duplicate characters from a string.
// Input: A string
// Output: String without duplicates

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let seen = new Array(256).fill(false);
    let result = '';
    for (let c of line) {
        let code = c.charCodeAt(0);
        if (!seen[code]) {
            seen[code] = true;
            result += c;
        }
    }
    console.log(result);
    rl.close();
});

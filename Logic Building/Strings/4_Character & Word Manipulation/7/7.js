// Q7: Keep only the first occurrence of each character.
// Input: A string
// Output: String with only first occurrences

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

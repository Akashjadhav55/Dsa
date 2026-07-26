// Q9: Swap case: uppercase to lowercase and vice versa.
// Input: A string
// Output: Case-swapped string

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let result = '';
    for (let c of line) {
        if (c >= 'A' && c <= 'Z') result += c.toLowerCase();
        else if (c >= 'a' && c <= 'z') result += c.toUpperCase();
        else result += c;
    }
    console.log(result);
    rl.close();
});

// Q5: Print the string after removing all digits.
// Input: A string
// Output: String without digits

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let result = '';
    for (let c of line) {
        if (c < '0' || c > '9') result += c;
    }
    console.log(result);
    rl.close();
});

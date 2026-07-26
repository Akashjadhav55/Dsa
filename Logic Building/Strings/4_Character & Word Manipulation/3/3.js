// Q3: Replace all vowels with '*'.
// Input: A string
// Output: String with vowels replaced by '*'

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let result = '';
    for (let c of line) {
        if ('aeiouAEIOU'.includes(c)) result += '*';
        else result += c;
    }
    console.log(result);
    rl.close();
});

// Q4: Replace all spaces with '_'.
// Input: A string
// Output: String with spaces replaced by '_'

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    console.log(line.replace(/ /g, '_'));
    rl.close();
});

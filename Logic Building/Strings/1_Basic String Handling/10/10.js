// Q10: Check whether the string is empty or not.
// Input: A string
// Output: "Empty" or "Not Empty"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    if (line === '') console.log("Empty");
    else console.log("Not Empty");
    rl.close();
});

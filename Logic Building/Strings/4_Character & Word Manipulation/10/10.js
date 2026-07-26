// Q10: Shift each character by 1 ("abc" -> "bcd").
// Input: A string
// Output: Each character shifted by 1

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let result = '';
    for (let c of line) {
        result += String.fromCharCode(c.charCodeAt(0) + 1);
    }
    console.log(result);
    rl.close();
});

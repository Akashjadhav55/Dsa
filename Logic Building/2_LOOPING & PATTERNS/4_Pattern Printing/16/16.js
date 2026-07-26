// Q16: Print alphabet sequence (A, AB, ABC, ABCD).
// Input: An integer n
// Output: Alphabet sequence pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 0; i < n; i++) {
        let row = "";
        for (let j = 0; j <= i; j++) {
            row += String.fromCharCode(65 + j);
        }
        console.log(row);
    }
    rl.close();
});

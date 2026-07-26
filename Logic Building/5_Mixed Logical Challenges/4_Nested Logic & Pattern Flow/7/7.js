// Q7: Print pattern of increasing characters (A, AB, ABC...).
// Input: An integer n
// Output: Alphabet sequence pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    for (let i = 1; i <= n; i++) {
        let row = '';
        for (let j = 0; j < i; j++) {
            row += String.fromCharCode(65 + j);
        }
        console.log(row);
    }
    rl.close();
});

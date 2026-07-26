// Q8: Remove consecutive duplicates ("aaabb" -> "ab").
// Input: A string
// Output: String without consecutive duplicates

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let result = '';
    for (let i = 0; i < line.length; i++) {
        if (i === 0 || line[i] !== line[i - 1]) {
            result += line[i];
        }
    }
    console.log(result);
    rl.close();
});

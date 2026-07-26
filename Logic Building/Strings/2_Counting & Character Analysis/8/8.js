// Q8: Count substrings that start and end with the same character.
// Input: A string
// Output: Count of such substrings

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let count = 0;
    for (let i = 0; i < line.length; i++) {
        for (let j = i; j < line.length; j++) {
            if (line[i] === line[j]) count++;
        }
    }
    console.log(count);
    rl.close();
});

// Q6: Find all pairs of characters in a string that are the same (nested loop).
// Input: A string
// Output: All matching character pairs with indices

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    for (let i = 0; i < line.length; i++) {
        for (let j = i + 1; j < line.length; j++) {
            if (line[i] === line[j]) {
                console.log(`'${line[i]}' at index ${i} and ${j}`);
            }
        }
    }
    rl.close();
});

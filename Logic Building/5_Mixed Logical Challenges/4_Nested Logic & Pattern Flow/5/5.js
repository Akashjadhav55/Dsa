// Q5: Count how many times a number appears consecutively in an array.
// Input: Size n, then n integers
// Output: Consecutive occurrence counts

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const arr = lines[1];
        let count = 1;
        for (let i = 1; i < arr.length; i++) {
            if (arr[i] === arr[i - 1]) {
                count++;
            } else {
                console.log(`${arr[i - 1]} appears ${count} times`);
                count = 1;
            }
        }
        console.log(`${arr[arr.length - 1]} appears ${count} times`);
        rl.close();
    }
});

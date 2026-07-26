// Q2: Print all pairs in an array whose sum equals a given number.
// Input: Size n, n integers, and target sum
// Output: All pairs with the given sum

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim());
    if (lines.length === 3) {
        const arr = lines[1].split(' ').map(Number);
        const target = parseInt(lines[2]);
        for (let i = 0; i < arr.length; i++) {
            for (let j = i + 1; j < arr.length; j++) {
                if (arr[i] + arr[j] === target) {
                    console.log(`${arr[i]} + ${arr[j]} = ${target}`);
                }
            }
        }
        rl.close();
    }
});

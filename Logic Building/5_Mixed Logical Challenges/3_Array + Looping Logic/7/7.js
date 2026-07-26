// Q7: Merge two arrays into one.
// Input: Size n and m, two arrays
// Output: Merged array

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim());
    if (lines.length === 4) {
        const a = lines[1].split(' ').map(Number);
        const b = lines[3].split(' ').map(Number);
        console.log(a.concat(b).join(' '));
        rl.close();
    }
});

// Q7: Find common elements between two arrays.
// Input: Size n and m, two arrays
// Output: Common elements

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim());
    if (lines.length === 4) {
        const a = lines[1].split(' ').map(Number);
        const b = lines[3].split(' ').map(Number);
        const common = [...new Set(a.filter(v => b.includes(v)))];
        console.log(common.join(' '));
        rl.close();
    }
});

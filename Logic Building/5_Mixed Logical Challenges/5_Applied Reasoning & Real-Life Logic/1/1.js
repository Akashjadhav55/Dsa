// Q1: Given marks of students, find how many passed (>= 40).
// Input: Number of students, then their marks
// Output: Count of students who passed

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const count = lines[1].filter(m => m >= 40).length;
        console.log(count);
        rl.close();
    }
});

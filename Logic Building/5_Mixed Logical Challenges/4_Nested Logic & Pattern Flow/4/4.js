// Q4: Check if an array is sorted (ascending or descending).
// Input: Size n, then n integers
// Output: "Ascending", "Descending", or "Not Sorted"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        const arr = lines[1];
        let asc = true, desc = true;
        for (let i = 0; i < arr.length - 1; i++) {
            if (arr[i] > arr[i + 1]) asc = false;
            if (arr[i] < arr[i + 1]) desc = false;
        }
        console.log(asc ? "Ascending" : desc ? "Descending" : "Not Sorted");
        rl.close();
    }
});

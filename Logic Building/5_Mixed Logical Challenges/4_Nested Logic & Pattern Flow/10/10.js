// Q10: Print numbers in a spiral-like pattern (conceptual dry run).
// Input: An integer n
// Output: Spiral number pattern

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    const matrix = Array.from({ length: n }, () => Array(n).fill(0));
    let num = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        for (let i = left; i <= right; i++) matrix[top][i] = num++;
        top++;
        for (let i = top; i <= bottom; i++) matrix[i][right] = num++;
        right--;
        if (top <= bottom) {
            for (let i = right; i >= left; i--) matrix[bottom][i] = num++;
            bottom--;
        }
        if (left <= right) {
            for (let i = bottom; i >= top; i--) matrix[i][left] = num++;
            left++;
        }
    }
    for (const row of matrix) {
        console.log(row.map(v => String(v).padStart(4)).join(''));
    }
    rl.close();
});

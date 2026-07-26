// Q4: Simulate a simple calculator using switch-case.
// Input: Two numbers and an operator (+, -, *, /)
// Output: Result of the operation

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim());
    if (lines.length === 3) {
        const a = parseFloat(lines[0]);
        const op = lines[1];
        const b = parseFloat(lines[2]);
        switch (op) {
            case '+': console.log(a + b); break;
            case '-': console.log(a - b); break;
            case '*': console.log(a * b); break;
            case '/': console.log(b !== 0 ? a / b : "Cannot divide by zero"); break;
            default: console.log("Invalid operator");
        }
        rl.close();
    }
});

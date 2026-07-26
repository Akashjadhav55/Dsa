// Q3: Validate a password (at least one uppercase, lowercase, digit, special char).
// Input: A password string
// Output: "Valid" or "Invalid"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    for (const c of line) {
        if (/[A-Z]/.test(c)) hasUpper = true;
        else if (/[a-z]/.test(c)) hasLower = true;
        else if (/[0-9]/.test(c)) hasDigit = true;
        else hasSpecial = true;
    }
    console.log(hasUpper && hasLower && hasDigit && hasSpecial ? "Valid" : "Invalid");
    rl.close();
});

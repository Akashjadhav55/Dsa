// Q3: Count how many uppercase and lowercase letters a string has.
// Input: A string
// Output: Uppercase count and lowercase count

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let upper = 0, lower = 0;
    for (let c of line) {
        if (c >= 'A' && c <= 'Z') upper++;
        else if (c >= 'a' && c <= 'z') lower++;
    }
    console.log("Uppercase: " + upper);
    console.log("Lowercase: " + lower);
    rl.close();
});

// Q2: Count the number of digits, letters, and special characters.
// Input: A string
// Output: Count of digits, letters, and special characters

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let digits = 0, letters = 0, special = 0;
    for (let c of line) {
        if (c >= '0' && c <= '9') digits++;
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) letters++;
        else if (c !== ' ') special++;
    }
    console.log("Digits: " + digits);
    console.log("Letters: " + letters);
    console.log("Special characters: " + special);
    rl.close();
});

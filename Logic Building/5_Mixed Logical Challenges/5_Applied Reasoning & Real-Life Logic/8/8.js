// Q8: Print characters that are common in two strings.
// Input: Two strings
// Output: Common characters

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.toLowerCase());
    if (lines.length === 2) {
        const freq = Array(26).fill(0);
        for (const c of lines[0]) freq[c.charCodeAt(0) - 97]++;
        const result = [];
        for (const c of lines[1]) {
            if (freq[c.charCodeAt(0) - 97] > 0) {
                result.push(c);
                freq[c.charCodeAt(0) - 97] = 0;
            }
        }
        console.log(result.join(' '));
        rl.close();
    }
});

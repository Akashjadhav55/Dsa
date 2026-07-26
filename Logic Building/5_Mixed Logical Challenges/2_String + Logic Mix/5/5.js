// Q5: Print characters that appear more than once (without map).
// Input: A string
// Output: Repeated characters

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const freq = Array(26).fill(0);
    for (const c of line.toLowerCase()) {
        if (c >= 'a' && c <= 'z') freq[c.charCodeAt(0) - 97]++;
    }
    const result = [];
    for (let i = 0; i < 26; i++) {
        if (freq[i] > 1) result.push(String.fromCharCode(i + 97));
    }
    console.log(result.join(' '));
    rl.close();
});

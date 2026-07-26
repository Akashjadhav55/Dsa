// Q4: Find the frequency of each character in a string (without map).
// Input: A string
// Output: Frequency of each character

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let freq = new Array(256).fill(0);
    for (let c of line) {
        freq[c.charCodeAt(0)]++;
    }
    for (let i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            console.log(String.fromCharCode(i) + ": " + freq[i]);
        }
    }
    rl.close();
});

// Q1: Check if two strings are anagrams (without using collections).
// Input: Two strings
// Output: "Anagrams" or "Not Anagrams"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.toLowerCase());
    if (lines.length === 2) {
        if (lines[0].length !== lines[1].length) {
            console.log("Not Anagrams");
        } else {
            const freq = Array(26).fill(0);
            for (const c of lines[0]) freq[c.charCodeAt(0) - 97]++;
            for (const c of lines[1]) freq[c.charCodeAt(0) - 97]--;
            console.log(freq.every(f => f === 0) ? "Anagrams" : "Not Anagrams");
        }
        rl.close();
    }
});

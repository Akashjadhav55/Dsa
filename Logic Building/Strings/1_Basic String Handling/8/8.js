// Q8: Compare two strings lexicographically.
// Input: Two strings
// Output: "String 1 comes first", "String 2 comes first", or "Equal"

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line);
    if (lines.length === 2) {
        if (lines[0] < lines[1]) console.log("String 1 comes first");
        else if (lines[0] > lines[1]) console.log("String 2 comes first");
        else console.log("Equal");
        rl.close();
    }
});

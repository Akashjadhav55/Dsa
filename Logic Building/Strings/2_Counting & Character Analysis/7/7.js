// Q7: Count alphabets before 'm' and after 'm' in a string.
// Input: A string
// Output: Count before and after 'm'

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let before = 0, after = 0, found = false;
    const s = line.toLowerCase();
    for (let c of s) {
        if (c === 'm') found = true;
        else if (c >= 'a' && c <= 'z') {
            if (!found) before++;
            else after++;
        }
    }
    console.log("Before m: " + before);
    console.log("After m: " + after);
    rl.close();
});

// Q4: Replace every vowel in a string with its position (a=1, e=2...).
// Input: A string
// Output: Vowels replaced with positions

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let result = '';
    for (const c of line.toLowerCase()) {
        const pos = 'aeiou'.indexOf(c);
        result += pos !== -1 ? String(pos + 1) : c;
    }
    console.log(result);
    rl.close();
});

// Q3: Reverse words in a string if their length is even.
// Input: A sentence
// Output: Modified sentence

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const result = line.split(' ').map(w =>
        w.length % 2 === 0 ? w.split('').reverse().join('') : w
    );
    console.log(result.join(' '));
    rl.close();
});

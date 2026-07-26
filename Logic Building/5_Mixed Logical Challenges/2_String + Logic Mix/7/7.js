// Q7: Toggle case for every alternate word in a sentence.
// Input: A sentence
// Output: Modified sentence

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const result = line.split(' ').map((w, i) => {
        if (i % 2 === 1) {
            return w.split('').map(c =>
                c === c.toUpperCase() ? c.toLowerCase() : c.toUpperCase()
            ).join('');
        }
        return w;
    });
    console.log(result.join(' '));
    rl.close();
});

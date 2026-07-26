// Q4: Find the shortest word in a sentence.
// Input: A sentence
// Output: The shortest word

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const words = line.trim().split(/\s+/);
    let shortest = words[0];
    for (let w of words) {
        if (w.length < shortest.length) shortest = w;
    }
    console.log(shortest);
    rl.close();
});

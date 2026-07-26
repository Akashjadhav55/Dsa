// Q5: Count how many times a coin lands on heads/tails (use random).
// Input: Number of tosses
// Output: Count of heads and tails

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    const n = parseInt(line);
    let heads = 0, tails = 0;
    for (let i = 0; i < n; i++) {
        if (Math.random() < 0.5) heads++;
        else tails++;
    }
    console.log('Heads:', heads);
    console.log('Tails:', tails);
    rl.close();
});

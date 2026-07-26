// Q5: Find the smallest and largest digit in a given number.
// Input: An integer
// Output: Smallest and largest digit

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let n = parseInt(line);
    let smallest = 9, largest = 0;
    while (n !== 0) {
        const digit = n % 10;
        if (digit < smallest) smallest = digit;
        if (digit > largest) largest = digit;
        n = Math.floor(n / 10);
    }
    console.log(`Smallest: ${smallest}`);
    console.log(`Largest: ${largest}`);
    rl.close();
});

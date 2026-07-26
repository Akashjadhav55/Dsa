// Q10: Print the product of digits of a given number.
// Input: An integer
// Output: Product of all digits

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let n = parseInt(line);
    let product = 1;
    while (n > 0) {
        product *= n % 10;
        n = Math.floor(n / 10);
    }
    console.log(product);
    rl.close();
});

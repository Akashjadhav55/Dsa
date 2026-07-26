// Q1: Count the number of digits in a number recursively.
// Input: An integer
// Output: Number of digits

function countDigits(n) {
    if (n === 0) return 0;
    return 1 + countDigits(Math.floor(n / 10));
}

const n = parseInt(readline());
console.log(countDigits(n));

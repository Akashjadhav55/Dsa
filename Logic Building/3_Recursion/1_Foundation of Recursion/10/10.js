// Q10: Find sum of digits of a number recursively.
// Input: An integer
// Output: Sum of digits

function sumOfDigits(n) {
    if (n === 0) return 0;
    return (n % 10) + sumOfDigits(Math.floor(n / 10));
}

const n = parseInt(readline());
console.log(sumOfDigits(n));

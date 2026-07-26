// Q4: Find product of digits of a number recursively.
// Input: An integer
// Output: Product of digits

function productOfDigits(n) {
    if (n === 0) return 1;
    return (n % 10) * productOfDigits(Math.floor(n / 10));
}

const n = parseInt(readline());
console.log(productOfDigits(n));

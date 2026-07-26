// Q2: Reverse a number recursively.
// Input: An integer
// Output: Reversed number

function reverseNumber(n, rev) {
    if (n === 0) return rev;
    return reverseNumber(Math.floor(n / 10), rev * 10 + n % 10);
}

const n = parseInt(readline());
console.log(reverseNumber(n, 0));

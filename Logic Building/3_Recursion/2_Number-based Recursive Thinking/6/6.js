// Q6: Convert a number to binary recursively.
// Input: An integer
// Output: Binary representation

function toBinary(n) {
    if (n <= 1) return String(n);
    return toBinary(Math.floor(n / 2)) + (n % 2);
}

const n = parseInt(readline());
console.log(toBinary(n));

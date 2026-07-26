// Q5: Find GCD (HCF) of two numbers using Euclid's algorithm recursively.
// Input: Two integers
// Output: GCD of the two numbers

function gcd(a, b) {
    if (b === 0) return a;
    return gcd(b, a % b);
}

const [a, b] = readline().split(" ").map(Number);
console.log(gcd(a, b));

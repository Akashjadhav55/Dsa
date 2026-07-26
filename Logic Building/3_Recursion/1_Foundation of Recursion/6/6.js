// Q6: Print factorial of a number recursively.
// Input: An integer n
// Output: n!

function factorial(n) {
    if (n === 0 || n === 1) return 1;
    return n * factorial(n - 1);
}

const n = parseInt(readline());
console.log(factorial(n));

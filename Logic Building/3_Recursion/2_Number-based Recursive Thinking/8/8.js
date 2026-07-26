// Q8: Calculate the sum of first n even numbers recursively.
// Input: An integer n
// Output: Sum of first n even numbers

function sumEven(n) {
    if (n === 0) return 0;
    return (2 * n) + sumEven(n - 1);
}

const n = parseInt(readline());
console.log(sumEven(n));

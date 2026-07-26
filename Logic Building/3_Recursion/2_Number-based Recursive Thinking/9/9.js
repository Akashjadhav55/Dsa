// Q9: Calculate the sum of first n odd numbers recursively.
// Input: An integer n
// Output: Sum of first n odd numbers

function sumOdd(n) {
    if (n === 0) return 0;
    return (2 * n - 1) + sumOdd(n - 1);
}

const n = parseInt(readline());
console.log(sumOdd(n));

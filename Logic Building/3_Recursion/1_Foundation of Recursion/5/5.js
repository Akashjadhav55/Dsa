// Q5: Print sum of first n natural numbers recursively.
// Input: An integer n
// Output: Sum of 1+2+...+n

function sumN(n) {
    if (n === 0) return 0;
    return n + sumN(n - 1);
}

const n = parseInt(readline());
console.log(sumN(n));

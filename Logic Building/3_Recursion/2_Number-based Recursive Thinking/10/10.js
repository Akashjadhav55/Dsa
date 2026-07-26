// Q10: Find nCr (Combination formula) recursively using Pascal's relation.
// Input: n and r
// Output: nCr value

function nCr(n, r) {
    if (r === 0 || r === n) return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

const [n, r] = readline().split(" ").map(Number);
console.log(nCr(n, r));

// Q1: Print numbers from 1 to n using recursion.
// Input: An integer n
// Output: Numbers 1 to n

function print1ToN(n) {
    if (n === 0) return;
    print1ToN(n - 1);
    process.stdout.write(n + " ");
}

const n = parseInt(readline());
print1ToN(n);

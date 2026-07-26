// Q8: Print numbers in increasing and decreasing order in same function.
// Input: An integer n
// Output: 1 to n then n to 1

function printIncDec(n) {
    if (n === 0) return;
    process.stdout.write(n + " ");
    printIncDec(n - 1);
    process.stdout.write(n + " ");
}

const n = parseInt(readline());
printIncDec(n);

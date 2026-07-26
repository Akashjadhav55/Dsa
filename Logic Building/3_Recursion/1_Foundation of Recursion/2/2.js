// Q2: Print numbers from n down to 1 using recursion.
// Input: An integer n
// Output: Numbers n to 1

function printNTo1(n) {
    if (n === 0) return;
    process.stdout.write(n + " ");
    printNTo1(n - 1);
}

const n = parseInt(readline());
printNTo1(n);

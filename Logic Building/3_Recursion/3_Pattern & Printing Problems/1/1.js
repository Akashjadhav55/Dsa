// Q1: Print a line of n stars recursively.
// Input: An integer n
// Output: A line of n stars

function printStars(n) {
    if (n === 0) return;
    process.stdout.write("* ");
    printStars(n - 1);
}

const n = parseInt(readline());
printStars(n);

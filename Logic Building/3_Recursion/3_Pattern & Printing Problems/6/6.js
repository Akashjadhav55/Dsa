// Q6: Print reverse triangle pattern recursively.
// Input: An integer n
// Output: Reverse triangle

function printSpaces(s) {
    if (s === 0) return;
    process.stdout.write("  ");
    printSpaces(s - 1);
}

function printStars(c) {
    if (c === 0) return;
    process.stdout.write("* ");
    printStars(c - 1);
}

function printReverseTriangle(n, i) {
    if (i > n) return;
    printSpaces(i - 1);
    printStars(n - i + 1);
    console.log();
    printReverseTriangle(n, i + 1);
}

const n = parseInt(readline());
printReverseTriangle(n, 1);

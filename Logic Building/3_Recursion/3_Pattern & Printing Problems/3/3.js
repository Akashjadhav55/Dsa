// Q3: Print a triangle of stars recursively (top-down).
// Input: An integer n
// Output: Increasing triangle of stars

function printRow(cols) {
    if (cols === 0) return;
    process.stdout.write("* ");
    printRow(cols - 1);
}

function printTriangle(n, i) {
    if (i > n) return;
    printRow(i);
    console.log();
    printTriangle(n, i + 1);
}

const n = parseInt(readline());
printTriangle(n, 1);

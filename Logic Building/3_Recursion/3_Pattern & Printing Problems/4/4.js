// Q4: Print a triangle of stars recursively (bottom-up).
// Input: An integer n
// Output: Decreasing triangle of stars

function printRow(cols) {
    if (cols === 0) return;
    process.stdout.write("* ");
    printRow(cols - 1);
}

function printTriangle(n) {
    if (n === 0) return;
    printRow(n);
    console.log();
    printTriangle(n - 1);
}

const n = parseInt(readline());
printTriangle(n);

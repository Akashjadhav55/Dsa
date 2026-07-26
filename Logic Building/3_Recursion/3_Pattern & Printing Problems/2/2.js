// Q2: Print a square of stars recursively (n x n).
// Input: An integer n
// Output: n x n grid of stars

function printRow(cols) {
    if (cols === 0) return;
    process.stdout.write("* ");
    printRow(cols - 1);
}

function printSquare(rows, cols) {
    if (rows === 0) return;
    printRow(cols);
    console.log();
    printSquare(rows - 1, cols);
}

const n = parseInt(readline());
printSquare(n, n);

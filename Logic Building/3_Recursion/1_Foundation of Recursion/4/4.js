// Q4: Print only odd numbers from 1 to n recursively.
// Input: An integer n
// Output: Odd numbers from 1 to n

function printOdd(i, n) {
    if (i > n) return;
    if (i % 2 !== 0) process.stdout.write(i + " ");
    printOdd(i + 1, n);
}

const n = parseInt(readline());
printOdd(1, n);

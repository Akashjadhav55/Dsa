// Q3: Print only even numbers from 1 to n recursively.
// Input: An integer n
// Output: Even numbers from 1 to n

function printEven(i, n) {
    if (i > n) return;
    if (i % 2 === 0) process.stdout.write(i + " ");
    printEven(i + 1, n);
}

const n = parseInt(readline());
printEven(1, n);

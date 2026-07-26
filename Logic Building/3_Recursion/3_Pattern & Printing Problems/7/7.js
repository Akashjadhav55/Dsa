// Q7: Print multiplication table of n recursively.
// Input: An integer n
// Output: Table of n

function printTable(n, i) {
    if (i > 10) return;
    console.log(`${n} x ${i} = ${n * i}`);
    printTable(n, i + 1);
}

const n = parseInt(readline());
printTable(n, 1);

// Q5: Print pattern of numbers recursively (1 to n each row).
// Input: An integer n
// Output: Number pattern

function printNums(j) {
    if (j === 0) return;
    printNums(j - 1);
    process.stdout.write(j + " ");
}

function printPattern(n, i) {
    if (i > n) return;
    printNums(i);
    console.log();
    printPattern(n, i + 1);
}

const n = parseInt(readline());
printPattern(n, 1);

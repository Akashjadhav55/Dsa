// Q10: Print pattern of characters (A, AB, ABC, ...) recursively.
// Input: An integer n
// Output: Alphabet sequence pattern

function printChars(i) {
    if (i === 0) return;
    printChars(i - 1);
    process.stdout.write(String.fromCharCode(64 + i) + " ");
}

function printPattern(n, i) {
    if (i > n) return;
    printChars(i);
    console.log();
    printPattern(n, i + 1);
}

const n = parseInt(readline());
printPattern(n, 1);

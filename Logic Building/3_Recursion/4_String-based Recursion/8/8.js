// Q8: Print the string in reverse order recursively (without using loops).
// Input: A string
// Output: Reversed string

function printReverse(s, i) {
    if (i < 0) return;
    process.stdout.write(s[i]);
    printReverse(s, i - 1);
}

const s = readline();
printReverse(s, s.length - 1);

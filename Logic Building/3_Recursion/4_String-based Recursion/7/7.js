// Q7: Print all characters of a string one by one recursively.
// Input: A string
// Output: Each character on a new line

function printChars(s, i) {
    if (i === s.length) return;
    console.log(s[i]);
    printChars(s, i + 1);
}

const s = readline();
printChars(s, 0);

// Q4: Remove all spaces from a string recursively.
// Input: A string
// Output: String without spaces

function removeSpaces(s, i) {
    if (i === s.length) return "";
    if (s[i] === " ") return removeSpaces(s, i + 1);
    return s[i] + removeSpaces(s, i + 1);
}

const s = readline();
console.log(removeSpaces(s, 0));

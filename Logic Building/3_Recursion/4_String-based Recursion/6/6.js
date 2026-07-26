// Q6: Remove all occurrences of a character from a string recursively.
// Input: A string and a character
// Output: String without the character

function removeChar(s, i, ch) {
    if (i === s.length) return "";
    if (s[i] === ch) return removeChar(s, i + 1, ch);
    return s[i] + removeChar(s, i + 1, ch);
}

const s = readline();
const ch = readline();
console.log(removeChar(s, 0, ch));

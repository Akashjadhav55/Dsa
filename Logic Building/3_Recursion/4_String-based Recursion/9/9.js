// Q9: Convert a string to uppercase recursively.
// Input: A string
// Output: Uppercase string

function toUpperCase(s, i) {
    if (i === s.length) return "";
    let c = s[i];
    if (c >= "a" && c <= "z") c = String.fromCharCode(c.charCodeAt(0) - 32);
    return c + toUpperCase(s, i + 1);
}

const s = readline();
console.log(toUpperCase(s, 0));

// Q5: Replace all occurrences of a character (say 'a' -> 'x') recursively.
// Input: A string and characters to find/replace
// Output: Modified string

function replaceChar(s, i, find, replace) {
    if (i === s.length) return "";
    if (s[i] === find) return replace + replaceChar(s, i + 1, find, replace);
    return s[i] + replaceChar(s, i + 1, find, replace);
}

const s = readline();
const [find, replace] = readline().split(" ");
console.log(replaceChar(s, 0, find, replace));

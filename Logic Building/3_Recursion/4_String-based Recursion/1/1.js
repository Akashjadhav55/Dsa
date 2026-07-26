// Q1: Reverse a string using recursion.
// Input: A string
// Output: Reversed string

function reverseString(s, i) {
    if (i < 0) return "";
    return s[i] + reverseString(s, i - 1);
}

const s = readline();
console.log(reverseString(s, s.length - 1));

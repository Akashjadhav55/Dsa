// Q2: Check if a string is palindrome using recursion.
// Input: A string
// Output: "Palindrome" or "Not a Palindrome"

function isPalindrome(s, l, r) {
    if (l >= r) return true;
    if (s[l] !== s[r]) return false;
    return isPalindrome(s, l + 1, r - 1);
}

const s = readline();
console.log(isPalindrome(s, 0, s.length - 1) ? "Palindrome" : "Not a Palindrome");

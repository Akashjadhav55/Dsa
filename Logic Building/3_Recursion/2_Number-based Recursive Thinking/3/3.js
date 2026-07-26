// Q3: Check if a number is a palindrome using recursion.
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

function isPalindrome(n, original, rev) {
    if (n === 0) return original === rev;
    return isPalindrome(Math.floor(n / 10), original, rev * 10 + n % 10);
}

const n = parseInt(readline());
console.log(isPalindrome(n, n, 0) ? "Palindrome" : "Not a Palindrome");

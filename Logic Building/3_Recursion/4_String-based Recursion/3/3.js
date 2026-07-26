// Q3: Count vowels in a string recursively.
// Input: A string
// Output: Count of vowels

function countVowels(s, i) {
    if (i === s.length) return 0;
    const c = s[i].toLowerCase();
    const count = "aeiou".includes(c) ? 1 : 0;
    return count + countVowels(s, i + 1);
}

const s = readline();
console.log(countVowels(s, 0));

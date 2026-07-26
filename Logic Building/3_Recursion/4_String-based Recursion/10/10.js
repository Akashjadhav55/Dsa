// Q10: Count consonants and vowels separately using recursion.
// Input: A string
// Output: Vowel count and consonant count

function countVC(s, i, v, c) {
    if (i === s.length) return [v, c];
    const ch = s[i].toLowerCase();
    if (ch >= "a" && ch <= "z") {
        if ("aeiou".includes(ch))
            return countVC(s, i + 1, v + 1, c);
        else
            return countVC(s, i + 1, v, c + 1);
    }
    return countVC(s, i + 1, v, c);
}

const s = readline();
const [v, c] = countVC(s, 0, 0, 0);
console.log(`Vowels: ${v}`);
console.log(`Consonants: ${c}`);

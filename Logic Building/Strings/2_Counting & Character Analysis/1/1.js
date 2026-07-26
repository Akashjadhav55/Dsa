// Q1: Count how many vowels and consonants are in a string.
// Input: A string
// Output: Vowel count and consonant count

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let vowels = 0, consonants = 0;
    const s = line.toLowerCase();
    for (let c of s) {
        if (c >= 'a' && c <= 'z') {
            if ('aeiou'.includes(c)) vowels++;
            else consonants++;
        }
    }
    console.log("Vowels: " + vowels);
    console.log("Consonants: " + consonants);
    rl.close();
});

// Q7: Print digits of a number in words recursively (e.g., 123 -> "one two three").
// Input: An integer
// Output: Digits in words

const words = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"];

function printDigitsInWords(n) {
    if (n === 0) return;
    printDigitsInWords(Math.floor(n / 10));
    process.stdout.write(words[n % 10] + " ");
}

const n = parseInt(readline());
printDigitsInWords(n);

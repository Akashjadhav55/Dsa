// Q3: Print all numbers that are palindromes between 1-500.
// Input: None
// Output: All palindromic numbers 1-500

for (let i = 1; i <= 500; i++) {
    let original = i, reversed = 0, temp = i;
    while (temp !== 0) {
        reversed = reversed * 10 + temp % 10;
        temp = Math.floor(temp / 10);
    }
    if (original === reversed) {
        console.log(i);
    }
}

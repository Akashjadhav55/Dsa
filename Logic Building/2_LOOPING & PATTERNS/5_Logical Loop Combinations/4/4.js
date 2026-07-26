// Q4: Print numbers between 1-100 whose digits add up to a multiple of 3.
// Input: None
// Output: Numbers with digit sum divisible by 3

for (let i = 1; i <= 100; i++) {
    let sum = 0, temp = i;
    while (temp !== 0) {
        sum += temp % 10;
        temp = Math.floor(temp / 10);
    }
    if (sum % 3 === 0) {
        console.log(i);
    }
}

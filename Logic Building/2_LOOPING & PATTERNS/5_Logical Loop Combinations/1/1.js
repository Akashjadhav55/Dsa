// Q1: Print all numbers whose sum of digits is even (1-100).
// Input: None
// Output: Numbers 1-100 with even digit sum

for (let i = 1; i <= 100; i++) {
    let sum = 0, temp = i;
    while (temp !== 0) {
        sum += temp % 10;
        temp = Math.floor(temp / 10);
    }
    if (sum % 2 === 0) {
        console.log(i);
    }
}

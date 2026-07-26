// Q4: Print all Armstrong numbers between 1 and 1000.
// Input: None
// Output: Armstrong numbers from 1 to 1000

for (let num = 1; num <= 1000; num++) {
    let temp = num;
    let digits = String(num).length;
    let sum = 0;
    while (temp > 0) {
        const d = temp % 10;
        sum += Math.pow(d, digits);
        temp = Math.floor(temp / 10);
    }
    if (sum === num) console.log(num);
}

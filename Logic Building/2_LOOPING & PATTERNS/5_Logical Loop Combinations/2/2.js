// Q2: Count how many numbers between 1-500 are divisible by 7 but not by 5.
// Input: None
// Output: Count of such numbers

let count = 0;
for (let i = 1; i <= 500; i++) {
    if (i % 7 === 0 && i % 5 !== 0) count++;
}
console.log(count);

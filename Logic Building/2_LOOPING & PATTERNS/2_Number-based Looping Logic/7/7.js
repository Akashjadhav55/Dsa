// Q7: Print all prime numbers between 1 and 100.
// Input: None
// Output: All prime numbers from 2 to 100

for (let i = 2; i <= 100; i++) {
    let isPrime = true;
    for (let j = 2; j * j <= i; j++) {
        if (i % j === 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        console.log(i);
    }
}

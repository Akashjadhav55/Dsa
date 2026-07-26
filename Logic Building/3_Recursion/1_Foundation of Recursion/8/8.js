// Q8: Find nth Fibonacci number recursively.
// Input: An integer n
// Output: nth Fibonacci number

function fibonacci(n) {
    if (n === 0) return 0;
    if (n === 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

const n = parseInt(readline());
console.log(fibonacci(n));

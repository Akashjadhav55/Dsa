// Q9: Print Fibonacci series up to n terms recursively.
// Input: An integer n
// Output: First n Fibonacci numbers

function fibonacci(n) {
    if (n === 0) return 0;
    if (n === 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

const n = parseInt(readline());
let result = "";
for (let i = 0; i < n; i++) {
    result += fibonacci(i) + " ";
}
console.log(result.trim());

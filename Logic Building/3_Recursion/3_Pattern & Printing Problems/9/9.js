// Q9: Print sum of series 1 + 2 + 3 + ... + n recursively and display each step.
// Input: An integer n
// Output: Running sum at each step

function printSeries(n) {
    if (n === 0) return 0;
    return n + printSeries(n - 1);
}

const n = parseInt(readline());
let terms = "";
for (let i = 1; i <= n; i++) {
    terms += i + (i < n ? " + " : "");
}
console.log(`${terms} = ${printSeries(n)}`);

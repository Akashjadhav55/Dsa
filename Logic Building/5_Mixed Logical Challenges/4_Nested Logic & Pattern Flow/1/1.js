// Q1: Print a multiplication table in a formatted grid (10x10).
// Input: None
// Output: 10x10 multiplication table

for (let i = 1; i <= 10; i++) {
    let row = '';
    for (let j = 1; j <= 10; j++) {
        row += String(i * j).padStart(4);
    }
    console.log(row);
}

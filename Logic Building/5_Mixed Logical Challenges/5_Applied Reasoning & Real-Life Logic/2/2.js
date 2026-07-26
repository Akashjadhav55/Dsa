// Q2: Take age inputs and count how many are adults, minors, seniors.
// Input: Number of people, then their ages
// Output: Count of adults (18-60), minors (<18), seniors (>60)

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
const lines = [];
rl.on('line', (line) => {
    lines.push(line.trim().split(' ').map(Number));
    if (lines.length === 2) {
        let adults = 0, minors = 0, seniors = 0;
        for (const age of lines[1]) {
            if (age < 18) minors++;
            else if (age <= 60) adults++;
            else seniors++;
        }
        console.log('Adults:', adults);
        console.log('Minors:', minors);
        console.log('Seniors:', seniors);
        rl.close();
    }
});

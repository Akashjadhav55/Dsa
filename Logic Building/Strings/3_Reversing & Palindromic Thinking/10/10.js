// Q10: Reverse string but skip spaces.
// Input: A string
// Output: Reversed string with spaces in original positions

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let arr = line.split('');
    let left = 0, right = arr.length - 1;
    while (left < right) {
        if (arr[left] === ' ') left++;
        else if (arr[right] === ' ') right--;
        else {
            [arr[left], arr[right]] = [arr[right], arr[left]];
            left++;
            right--;
        }
    }
    console.log(arr.join(''));
    rl.close();
});

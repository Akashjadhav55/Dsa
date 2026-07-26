// Q9: Reverse only characters, keeping digits in place.
// Input: A string
// Output: Reversed characters, digits in original positions

const readline = require('readline');
const rl = readline.createInterface({ input: process.stdin });
rl.on('line', (line) => {
    let arr = line.split('');
    let left = 0, right = arr.length - 1;
    while (left < right) {
        if (arr[left] >= '0' && arr[left] <= '9') left++;
        else if (arr[right] >= '0' && arr[right] <= '9') right--;
        else {
            [arr[left], arr[right]] = [arr[right], arr[left]];
            left++;
            right--;
        }
    }
    console.log(arr.join(''));
    rl.close();
});

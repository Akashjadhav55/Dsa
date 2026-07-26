// Q6: Find all pairs of characters in a string that are the same (nested loop).
// Input: A string
// Output: All matching character pairs with indices

package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var s string
    fmt.Fscan(reader, &s)
    runes := []rune(s)
    for i := 0; i < len(runes); i++ {
        for j := i + 1; j < len(runes); j++ {
            if runes[i] == runes[j] {
                fmt.Printf("'%c' at index %d and %d\n", runes[i], i, j)
            }
        }
    }
}

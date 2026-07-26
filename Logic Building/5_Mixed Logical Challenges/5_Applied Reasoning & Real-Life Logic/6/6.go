// Q6: Print frequency of each digit in a number.
// Input: An integer
// Output: Frequency of digits 0-9

package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    line, _ := reader.ReadString('\n')
    line = strings.TrimSpace(line)
    freq := make([]int, 10)
    for _, c := range line {
        freq[c-'0']++
    }
    for i := 0; i < 10; i++ {
        if freq[i] > 0 {
            fmt.Printf("%d : %d\n", i, freq[i])
        }
    }
}

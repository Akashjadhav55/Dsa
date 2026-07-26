// Q15: Print binary alternating pattern (1, 01, 101, 0101).
// Input: An integer n
// Output: Binary alternating pattern

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        row := ""
        for j := 0; j < i; j++ {
            if (i+j)%2 == 0 {
                row += "1"
            } else {
                row += "0"
            }
        }
        fmt.Println(row)
    }
}

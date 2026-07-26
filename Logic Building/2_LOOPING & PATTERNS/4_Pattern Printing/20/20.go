// Q20: Print number triangle (1, 12, 123, 1234, 12345).
// Input: An integer n
// Output: Number triangle pattern

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        row := ""
        for j := 1; j <= i; j++ {
            row += fmt.Sprintf("%d", j)
        }
        fmt.Println(row)
    }
}

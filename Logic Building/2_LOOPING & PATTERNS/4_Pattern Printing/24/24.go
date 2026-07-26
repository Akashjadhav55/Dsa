// Q24: Print hollow diamond star pattern.
// Input: An integer n
// Output: Hollow diamond with stars

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        row := strings.Repeat(" ", n-i)
        for j := 0; j < 2*i-1; j++ {
            if j == 0 || j == 2*i-2 {
                row += "*"
            } else {
                row += " "
            }
        }
        fmt.Println(row)
    }
    for i := n - 1; i >= 1; i-- {
        row := strings.Repeat(" ", n-i)
        for j := 0; j < 2*i-1; j++ {
            if j == 0 || j == 2*i-2 {
                row += "*"
            } else {
                row += " "
            }
        }
        fmt.Println(row)
    }
}

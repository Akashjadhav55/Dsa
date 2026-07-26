// Q21: Print palindromic number triangle (1, 21, 321, 4321).
// Input: An integer n
// Output: Decreasing number triangle

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        row := ""
        for j := i; j >= 1; j-- {
            row += fmt.Sprintf("%d", j)
        }
        fmt.Println(row)
    }
}

// Q13: Print consecutive numbers pattern (1, 23, 456, 78910).
// Input: An integer n
// Output: Continuous number pattern

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    num := 1
    for i := 1; i <= n; i++ {
        row := ""
        for j := 0; j < i; j++ {
            row += fmt.Sprintf("%d", num)
            num++
        }
        fmt.Println(row)
    }
}

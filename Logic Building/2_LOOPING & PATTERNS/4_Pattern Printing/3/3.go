// Q3: Print n stars on same line.
// Input: An integer n
// Output: n stars on one line

package main

import (
    "fmt"
    "strings"
)

func main() {
    var n int
    fmt.Scan(&n)
    fmt.Println(strings.Repeat("*", n))
}

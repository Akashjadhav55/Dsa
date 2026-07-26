// Q1: Print the squares of numbers from 1 to n.
// Input: An integer n
// Output: Squares of 1 to n

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(i * i)
    }
}

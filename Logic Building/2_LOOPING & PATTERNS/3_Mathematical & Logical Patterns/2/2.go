// Q2: Print cubes of numbers from 1 to n.
// Input: An integer n
// Output: Cubes of 1 to n

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        fmt.Println(i * i * i)
    }
}

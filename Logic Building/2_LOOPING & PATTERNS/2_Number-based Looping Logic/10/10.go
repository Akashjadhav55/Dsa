// Q10: Print sum of first n terms of Fibonacci series.
// Input: An integer n
// Output: Sum of first n Fibonacci numbers

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    a, b := 0, 1
    sum := 0
    for i := 0; i < n; i++ {
        sum += a
        a, b = b, a+b
    }
    fmt.Println(sum)
}

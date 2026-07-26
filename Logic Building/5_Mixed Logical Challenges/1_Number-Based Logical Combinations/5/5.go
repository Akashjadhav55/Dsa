// Q5: Find the factorial of a number using recursion.
// Input: An integer n
// Output: n!

package main

import "fmt"

func factorial(n int) int {
    if n <= 1 {
        return 1
    }
    return n * factorial(n-1)
}

func main() {
    var n int
    fmt.Scan(&n)
    fmt.Println(factorial(n))
}

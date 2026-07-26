// Q9: Generate Fibonacci series up to N using recursion.
// Input: An integer N
// Output: Fibonacci series up to N

package main

import "fmt"

func fibonacci(n int) int {
    if n <= 1 {
        return n
    }
    return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
    var limit int
    fmt.Scan(&limit)
    i := 0
    for {
        val := fibonacci(i)
        if val > limit {
            break
        }
        fmt.Print(val, " ")
        i++
    }
    fmt.Println()
}

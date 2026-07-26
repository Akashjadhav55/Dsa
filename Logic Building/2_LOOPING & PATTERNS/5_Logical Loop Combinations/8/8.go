// Q8: Print factorial of each number from 1 to n.
// Input: An integer n
// Output: Factorials of 1 to n

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    fact := 1
    for i := 1; i <= n; i++ {
        fact *= i
        fmt.Printf("%d! = %d\n", i, fact)
    }
}

// Q7: Find the sum of all factors of a number.
// Input: An integer
// Output: Sum of all factors

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    sum := 0
    for i := 1; i <= n; i++ {
        if n%i == 0 {
            sum += i
        }
    }
    fmt.Println(sum)
}

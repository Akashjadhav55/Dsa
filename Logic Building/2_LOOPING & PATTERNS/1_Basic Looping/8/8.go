// Q8: Print the sum of all odd numbers up to n.
// Input: An integer n
// Output: Sum of all odd numbers from 1 to n

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    sum := 0
    for i := 1; i <= n; i += 2 {
        sum += i
    }
    fmt.Println(sum)
}

// Q7: Print the sum of all even numbers up to n.
// Input: An integer n
// Output: Sum of all even numbers from 2 to n

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    sum := 0
    for i := 2; i <= n; i += 2 {
        sum += i
    }
    fmt.Println(sum)
}

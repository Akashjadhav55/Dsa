// Q9: Count how many numbers are divisible by 3 and 5 both.
// Input: Size n, then n integers
// Output: Count of numbers divisible by 15

package main

import "fmt"

func main() {
    var n, count int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        var x int
        fmt.Scan(&x)
        if x%3 == 0 && x%5 == 0 {
            count++
        }
    }
    fmt.Println(count)
}

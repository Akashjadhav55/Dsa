// Q1: Count the number of digits in a given number.
// Input: An integer
// Output: Number of digits

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    count := 0
    if n == 0 {
        count = 1
    }
    for n != 0 {
        count++
        n /= 10
    }
    fmt.Println(count)
}

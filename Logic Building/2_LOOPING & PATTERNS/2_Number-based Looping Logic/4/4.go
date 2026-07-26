// Q4: Find the sum of digits of a number.
// Input: An integer
// Output: Sum of digits

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    sum := 0
    for n != 0 {
        sum += n % 10
        n /= 10
    }
    fmt.Println(sum)
}

// Q2: Find the sum of digits of a number (use loop).
// Input: An integer
// Output: Sum of digits

package main

import "fmt"

func main() {
    var num int
    fmt.Scan(&num)
    sum := 0
    for num > 0 {
        sum += num % 10
        num /= 10
    }
    fmt.Println(sum)
}

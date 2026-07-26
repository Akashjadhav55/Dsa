// Q10: Take 5 numbers as input. If user enters 0, skip it. Print sum of all non-zero numbers.
// Input: 5 integers
// Output: Sum of non-zero numbers

package main

import "fmt"

func main() {
    sum := 0
    for i := 0; i < 5; i++ {
        var n int
        fmt.Scan(&n)
        if n != 0 {
            sum += n
        }
    }
    fmt.Println(sum)
}

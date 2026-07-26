// Q6: Check if a number is a perfect number.
// Input: An integer
// Output: "Perfect Number" or "Not a Perfect Number"

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    sum := 0
    for i := 1; i < n; i++ {
        if n%i == 0 {
            sum += i
        }
    }
    if sum == n {
        fmt.Println("Perfect Number")
    } else {
        fmt.Println("Not a Perfect Number")
    }
}

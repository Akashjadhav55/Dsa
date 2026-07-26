// Q5: Check if a number is an Armstrong number.
// Input: An integer
// Output: "Armstrong Number" or "Not an Armstrong Number"

package main

import (
    "fmt"
    "math"
)

func main() {
    var n int
    fmt.Scan(&n)
    original := n
    sum := 0
    digits := int(math.Log10(float64(n))) + 1
    for n != 0 {
        d := n % 10
        power := 1
        for i := 0; i < digits; i++ {
            power *= d
        }
        sum += power
        n /= 10
    }
    if sum == original {
        fmt.Println("Armstrong Number")
    } else {
        fmt.Println("Not an Armstrong Number")
    }
}

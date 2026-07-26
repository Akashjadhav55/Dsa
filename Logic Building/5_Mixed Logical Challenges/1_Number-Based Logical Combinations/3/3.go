// Q3: Check if a number is an Armstrong number.
// Input: An integer
// Output: "Armstrong Number" or "Not an Armstrong Number"

package main

import (
    "fmt"
    "math"
)

func main() {
    var num int
    fmt.Scan(&num)
    temp := num
    digits := 0
    for t := num; t > 0; t /= 10 {
        digits++
    }
    sum := 0
    for temp > 0 {
        d := temp % 10
        sum += int(math.Pow(float64(d), float64(digits)))
        temp /= 10
    }
    if sum == num {
        fmt.Println("Armstrong Number")
    } else {
        fmt.Println("Not an Armstrong Number")
    }
}

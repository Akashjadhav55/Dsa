// Q4: Print all Armstrong numbers between 1 and 1000.
// Input: None
// Output: Armstrong numbers from 1 to 1000

package main

import (
    "fmt"
    "math"
)

func main() {
    for num := 1; num <= 1000; num++ {
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
            fmt.Println(num)
        }
    }
}

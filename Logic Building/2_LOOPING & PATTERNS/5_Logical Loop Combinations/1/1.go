// Q1: Print all numbers whose sum of digits is even (1-100).
// Input: None
// Output: Numbers 1-100 with even digit sum

package main

import "fmt"

func main() {
    for i := 1; i <= 100; i++ {
        sum, temp := 0, i
        for temp != 0 {
            sum += temp % 10
            temp /= 10
        }
        if sum%2 == 0 {
            fmt.Println(i)
        }
    }
}

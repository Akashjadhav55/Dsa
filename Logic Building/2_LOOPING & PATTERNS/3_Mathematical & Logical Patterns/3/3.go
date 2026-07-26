// Q3: Print all numbers between a and b divisible by 7.
// Input: Two integers a and b
// Output: Numbers between a and b divisible by 7

package main

import "fmt"

func main() {
    var a, b int
    fmt.Scan(&a, &b)
    for i := a; i <= b; i++ {
        if i%7 == 0 {
            fmt.Println(i)
        }
    }
}

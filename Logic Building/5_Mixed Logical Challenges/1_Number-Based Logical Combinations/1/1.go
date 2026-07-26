// Q1: Print all numbers between 1 and N that are divisible by both 3 and 5.
// Input: An integer N
// Output: Numbers divisible by 15

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        if i%3 == 0 && i%5 == 0 {
            fmt.Println(i)
        }
    }
}

// Q8: Check if a number is prime or not.
// Input: An integer
// Output: "Prime" or "Not Prime"

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    if n <= 1 {
        fmt.Println("Not Prime")
        return
    }
    isPrime := true
    for i := 2; i*i <= n; i++ {
        if n%i == 0 {
            isPrime = false
            break
        }
    }
    if isPrime {
        fmt.Println("Prime")
    } else {
        fmt.Println("Not Prime")
    }
}

// Q7: Print all prime numbers between 1 and N.
// Input: An integer N
// Output: All primes from 1 to N

package main

import (
    "fmt"
    "math"
)

func main() {
    var n int
    fmt.Scan(&n)
    for i := 2; i <= n; i++ {
        isPrime := true
        for j := 2; j <= int(math.Sqrt(float64(i))); j++ {
            if i%j == 0 {
                isPrime = false
                break
            }
        }
        if isPrime {
            fmt.Println(i)
        }
    }
}

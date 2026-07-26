// Q8: Find the count of prime numbers in the array.
// Input: Size n, then n integers
// Output: Count of primes

package main

import (
    "fmt"
    "math"
)

func isPrime(num int) bool {
    if num < 2 {
        return false
    }
    for i := 2; i <= int(math.Sqrt(float64(num))); i++ {
        if num%i == 0 {
            return false
        }
    }
    return true
}

func main() {
    var n, count int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        var x int
        fmt.Scan(&x)
        if isPrime(x) {
            count++
        }
    }
    fmt.Println(count)
}

// Q9: Count how many prime numbers are there in an array.
// Input: Size n, then n integers
// Output: Count of primes

package main

import (
    "bufio"
    "fmt"
    "math"
    "os"
)

func isPrime(n int) bool {
    if n < 2 {
        return false
    }
    for i := 2; i <= int(math.Sqrt(float64(n))); i++ {
        if n%i == 0 {
            return false
        }
    }
    return true
}

func main() {
    reader := bufio.NewReader(os.Stdin)
    var n int
    fmt.Fscan(reader, &n)
    count := 0
    for i := 0; i < n; i++ {
        var v int
        fmt.Fscan(reader, &v)
        if isPrime(v) {
            count++
        }
    }
    fmt.Println(count)
}

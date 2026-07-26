// Q7: Print all prime numbers between 1 and 100.
// Input: None
// Output: All prime numbers from 2 to 100

package main

import "fmt"

func main() {
    for i := 2; i <= 100; i++ {
        isPrime := true
        for j := 2; j*j <= i; j++ {
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

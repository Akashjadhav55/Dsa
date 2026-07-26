// Q5: Count how many times a coin lands on heads/tails (use random).
// Input: Number of tosses
// Output: Count of heads and tails

package main

import (
    "fmt"
    "math/rand"
)

func main() {
    var n int
    fmt.Scan(&n)
    heads, tails := 0, 0
    for i := 0; i < n; i++ {
        if rand.Float64() < 0.5 {
            heads++
        } else {
            tails++
        }
    }
    fmt.Println("Heads:", heads)
    fmt.Println("Tails:", tails)
}

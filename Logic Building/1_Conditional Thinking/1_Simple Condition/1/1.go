// Q1: Take a number and print whether it's positive, negative, or zero.
// Input: A single integer
// Output: "Positive", "Negative", or "Zero"

package main

import "fmt"

func main() {
    // Write your solution here
      var n int
    fmt.Scan(&n)
    if n > 0 {
        fmt.Println("Positive")
    } else if n < 0 {
        fmt.Println("Negative")
    } else {
        fmt.Println("Zero")
    }

}

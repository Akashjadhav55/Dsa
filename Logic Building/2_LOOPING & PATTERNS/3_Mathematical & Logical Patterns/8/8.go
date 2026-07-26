// Q8: Check if a number is a strong number (sum of factorials of digits = number).
// Input: An integer
// Output: "Strong Number" or "Not a Strong Number"

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    original := n
    sum := 0
    for n != 0 {
        digit := n % 10
        fact := 1
        for i := 1; i <= digit; i++ {
            fact *= i
        }
        sum += fact
        n /= 10
    }
    if sum == original {
        fmt.Println("Strong Number")
    } else {
        fmt.Println("Not a Strong Number")
    }
}

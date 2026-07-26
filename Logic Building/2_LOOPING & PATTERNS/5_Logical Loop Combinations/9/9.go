// Q9: Print the sum of all odd digits and even digits separately in a number.
// Input: An integer
// Output: Sum of odd digits and sum of even digits

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    oddSum, evenSum := 0, 0
    for n != 0 {
        digit := n % 10
        if digit%2 == 0 {
            evenSum += digit
        } else {
            oddSum += digit
        }
        n /= 10
    }
    fmt.Printf("Sum of odd digits: %d\n", oddSum)
    fmt.Printf("Sum of even digits: %d\n", evenSum)
}

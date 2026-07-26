// Q3: Check if a number is a palindrome.
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    original := n
    reversed := 0
    for n != 0 {
        reversed = reversed*10 + n%10
        n /= 10
    }
    if original == reversed {
        fmt.Println("Palindrome")
    } else {
        fmt.Println("Not a Palindrome")
    }
}

// Q9: Check if a number is palindrome (121 -> true).
// Input: An integer
// Output: "Palindrome" or "Not a Palindrome"

package main

import "fmt"

func main() {
    var num int
    fmt.Scan(&num)
    temp, rev := num, 0
    for temp > 0 {
        rev = rev*10 + temp%10
        temp /= 10
    }
    if num == rev {
        fmt.Println("Palindrome")
    } else {
        fmt.Println("Not a Palindrome")
    }
}

// Q4: Check if a number is divisible by both 3 and 5.
// Input: A single integer
// Output: "Divisible by both 3 and 5" or "Not divisible by both"

package main

import "fmt"

func main() {
    // Write your solution here

    var num int 
    fmt.Print("Enter a numbers :")
    fmt.Scan(&num)
    if num%3 == 0 && num%5 == 0 {
        fmt.Println("Divisible by both 3 and 5")
    } else {
        fmt.Println("Not divisible by both")
    }
}

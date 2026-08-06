// Q2: Check if a number is even or odd.
// Input: A single integer
// Output: "Even" or "Odd"

package main

import "fmt"

func main() {
    // Write your solution here
    var num int
    fmt.Print("Enter a number: ")
    fmt.Scanln(&num)
    if num%2 == 0 {
        fmt.Println("Even")
    } else {
        fmt.Println("Odd")
    }   
    
}

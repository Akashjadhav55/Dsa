// Q8: Take a temperature value and print "Cold", "Warm", or "Hot" using range conditions.
// Input: A temperature (integer)
// Output: "Cold" (if <15), "Warm" (if 15-30), or "Hot" (if >30)

package main

import "fmt"

func main() {
    // Write your solution here
    var temp int
    fmt.Print("Enter temperature: ")
    fmt.Scanln(&temp)
    if temp < 15 {
        fmt.Println("Cold")
    } else if temp >= 15 && temp <= 30 {
        fmt.Println("Warm")
    } else {
        fmt.Println("Hot")
    }

}

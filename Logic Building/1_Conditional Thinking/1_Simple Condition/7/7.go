// Q7: Take three numbers and print the largest.
// Input: Three integers
// Output: The largest number

package main

import "fmt"

func main() {
    // Write your solution here
    var a, b, c int
    fmt.Print("Enter three numbers: ")
fmt.Scan(&a, &b, &c)    
    if a >= b && a >= c {
        fmt.Println(a)
    }else if b >= a && b >= c {
        fmt.Println(b)
    }else {
        fmt.Println(c)
    }
}

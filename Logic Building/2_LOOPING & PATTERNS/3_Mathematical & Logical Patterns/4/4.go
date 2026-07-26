// Q4: Find HCF (GCD) of two numbers using loops.
// Input: Two integers
// Output: GCD of the two numbers

package main

import "fmt"

func main() {
    var a, b int
    fmt.Scan(&a, &b)
    for b != 0 {
        a, b = b, a%b
    }
    fmt.Println(a)
}

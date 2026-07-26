// Q5: Find LCM of two numbers using loops.
// Input: Two integers
// Output: LCM of the two numbers

package main

import "fmt"

func main() {
    var a, b int
    fmt.Scan(&a, &b)
    maxVal := a
    if b > maxVal {
        maxVal = b
    }
    for {
        if maxVal%a == 0 && maxVal%b == 0 {
            fmt.Println(maxVal)
            break
        }
        maxVal++
    }
}

// Q6: Print all factors of a given number.
// Input: An integer
// Output: All factors of the number

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        if n%i == 0 {
            fmt.Println(i)
        }
    }
}

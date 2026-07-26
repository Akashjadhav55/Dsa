// Q2: Print the reverse of a given number.
// Input: An integer
// Output: Reversed number

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    reversed := 0
    for n != 0 {
        reversed = reversed*10 + n%10
        n /= 10
    }
    fmt.Println(reversed)
}

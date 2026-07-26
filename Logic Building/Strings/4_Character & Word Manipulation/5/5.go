// Q5: Print the string after removing all digits.
// Input: A string
// Output: String without digits

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    result := ""
    for _, c := range s {
        if c < '0' || c > '9' {
            result += string(c)
        }
    }
    fmt.Println(result)
}

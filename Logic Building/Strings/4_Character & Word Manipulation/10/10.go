// Q10: Shift each character by 1 ("abc" -> "bcd").
// Input: A string
// Output: Each character shifted by 1

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    result := ""
    for _, c := range s {
        result += string(c + 1)
    }
    fmt.Println(result)
}

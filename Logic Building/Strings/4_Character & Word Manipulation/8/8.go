// Q8: Remove consecutive duplicates ("aaabb" -> "ab").
// Input: A string
// Output: String without consecutive duplicates

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    result := ""
    for i := 0; i < len(s); i++ {
        if i == 0 || s[i] != s[i-1] {
            result += string(s[i])
        }
    }
    fmt.Println(result)
}

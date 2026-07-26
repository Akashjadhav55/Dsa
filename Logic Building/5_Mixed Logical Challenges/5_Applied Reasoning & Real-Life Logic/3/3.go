// Q3: Validate a password (at least one uppercase, lowercase, digit, special char).
// Input: A password string
// Output: "Valid" or "Invalid"

package main

import (
    "bufio"
    "fmt"
    "os"
    "unicode"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var pwd string
    fmt.Fscan(reader, &pwd)
    hasUpper, hasLower, hasDigit, hasSpecial := false, false, false, false
    for _, c := range pwd {
        if unicode.IsUpper(c) {
            hasUpper = true
        } else if unicode.IsLower(c) {
            hasLower = true
        } else if unicode.IsDigit(c) {
            hasDigit = true
        } else {
            hasSpecial = true
        }
    }
    if hasUpper && hasLower && hasDigit && hasSpecial {
        fmt.Println("Valid")
    } else {
        fmt.Println("Invalid")
    }
}

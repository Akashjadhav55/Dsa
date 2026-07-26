// Q4: Simulate a simple calculator using switch-case.
// Input: Two numbers and an operator (+, -, *, /)
// Output: Result of the operation

package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var a, b float64
    var op string
    fmt.Fscan(reader, &a)
    fmt.Fscan(reader, &op)
    fmt.Fscan(reader, &b)
    switch op {
    case "+":
        fmt.Println(a + b)
    case "-":
        fmt.Println(a - b)
    case "*":
        fmt.Println(a * b)
    case "/":
        if b != 0 {
            fmt.Println(a / b)
        } else {
            fmt.Println("Cannot divide by zero")
        }
    default:
        fmt.Println("Invalid operator")
    }
}

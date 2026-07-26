// Q8: Print the reverse of a number (123 -> 321).
// Input: An integer
// Output: Reversed number

package main

import "fmt"

func main() {
    var num int
    fmt.Scan(&num)
    rev := 0
    for num > 0 {
        rev = rev*10 + num%10
        num /= 10
    }
    fmt.Println(rev)
}

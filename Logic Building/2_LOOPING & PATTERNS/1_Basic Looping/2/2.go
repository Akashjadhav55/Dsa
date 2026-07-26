// Q2: Print all even numbers between 1 and 100.
// Input: None
// Output: All even numbers from 2 to 100

package main

import "fmt"

func main() {
    for i := 2; i <= 100; i += 2 {
        fmt.Println(i)
    }
}

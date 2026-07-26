// Q3: Print all odd numbers between 1 and 100.
// Input: None
// Output: All odd numbers from 1 to 99

package main

import "fmt"

func main() {
    for i := 1; i <= 100; i += 2 {
        fmt.Println(i)
    }
}

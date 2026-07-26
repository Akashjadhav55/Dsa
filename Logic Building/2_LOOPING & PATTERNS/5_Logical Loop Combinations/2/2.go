// Q2: Count how many numbers between 1-500 are divisible by 7 but not by 5.
// Input: None
// Output: Count of such numbers

package main

import "fmt"

func main() {
    count := 0
    for i := 1; i <= 500; i++ {
        if i%7 == 0 && i%5 != 0 {
            count++
        }
    }
    fmt.Println(count)
}

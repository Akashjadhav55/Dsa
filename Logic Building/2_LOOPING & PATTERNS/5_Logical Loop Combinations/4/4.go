// Q4: Print numbers between 1-100 whose digits add up to a multiple of 3.
// Input: None
// Output: Numbers with digit sum divisible by 3

package main

import "fmt"

func main() {
    for i := 1; i <= 100; i++ {
        sum, temp := 0, i
        for temp != 0 {
            sum += temp % 10
            temp /= 10
        }
        if sum%3 == 0 {
            fmt.Println(i)
        }
    }
}

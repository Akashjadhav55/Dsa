// Q6: Print all numbers from 1-n whose binary representation has an even number of 1s.
// Input: An integer n
// Output: Numbers with even set bits

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 1; i <= n; i++ {
        count, temp := 0, i
        for temp != 0 {
            count += temp & 1
            temp >>= 1
        }
        if count%2 == 0 {
            fmt.Println(i)
        }
    }
}

// Q10: Check if a number is perfect (sum of factors equals number).
// Input: An integer
// Output: "Perfect Number" or "Not a Perfect Number"

package main

import "fmt"

func main() {
    var num int
    fmt.Scan(&num)
    sum := 0
    for i := 1; i < num; i++ {
        if num%i == 0 {
            sum += i
        }
    }
    if sum == num {
        fmt.Println("Perfect Number")
    } else {
        fmt.Println("Not a Perfect Number")
    }
}

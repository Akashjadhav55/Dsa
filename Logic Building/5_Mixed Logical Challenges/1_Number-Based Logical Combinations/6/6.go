// Q6: Count how many even digits a number contains.
// Input: An integer
// Output: Count of even digits

package main

import "fmt"

func main() {
    var num int
    fmt.Scan(&num)
    count := 0
    for num > 0 {
        if (num%10)%2 == 0 {
            count++
        }
        num /= 10
    }
    fmt.Println(count)
}

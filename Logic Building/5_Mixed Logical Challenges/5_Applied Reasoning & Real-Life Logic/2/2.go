// Q2: Take age inputs and count how many are adults, minors, seniors.
// Input: Number of people, then their ages
// Output: Count of adults (18-60), minors (<18), seniors (>60)

package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    var n int
    fmt.Fscan(reader, &n)
    adults, minors, seniors := 0, 0, 0
    for i := 0; i < n; i++ {
        var age int
        fmt.Fscan(reader, &age)
        if age < 18 {
            minors++
        } else if age <= 60 {
            adults++
        } else {
            seniors++
        }
    }
    fmt.Println("Adults:", adults)
    fmt.Println("Minors:", minors)
    fmt.Println("Seniors:", seniors)
}

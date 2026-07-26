// Q6: Count how many elements are common between two arrays.
// Input: Size n and m, two arrays
// Output: Count of common elements

package main

import "fmt"

func main() {
    var n, m, count int
    fmt.Scan(&n)
    setA := make(map[int]bool)
    for i := 0; i < n; i++ {
        var x int
        fmt.Scan(&x)
        setA[x] = true
    }
    fmt.Scan(&m)
    for i := 0; i < m; i++ {
        var x int
        fmt.Scan(&x)
        if setA[x] {
            count++
            setA[x] = false
        }
    }
    fmt.Println(count)
}

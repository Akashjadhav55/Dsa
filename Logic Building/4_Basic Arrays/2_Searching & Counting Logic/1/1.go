// Q1: Input an element x - check if it exists in the array.
// Input: Size n, n integers, element x
// Output: "Found" or "Not Found"

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    var x int
    fmt.Scan(&x)
    found := false
    for i := 0; i < n; i++ {
        if arr[i] == x {
            found = true
            break
        }
    }
    if found {
        fmt.Println("Found")
    } else {
        fmt.Println("Not Found")
    }
}

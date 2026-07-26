// Q5: Check if all elements in an array are unique.
// Input: Size n, then n integers
// Output: "All Unique" or "Has Duplicates"

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    seen := make(map[int]bool)
    hasDuplicates := false
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
        if seen[arr[i]] {
            hasDuplicates = true
        }
        seen[arr[i]] = true
    }
    if hasDuplicates {
        fmt.Println("Has Duplicates")
    } else {
        fmt.Println("All Unique")
    }
}

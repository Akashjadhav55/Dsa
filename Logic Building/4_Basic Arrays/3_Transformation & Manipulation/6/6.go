// Q6: Reverse an array (without using built-in reverse).
// Input: Size n, then n integers
// Output: Reversed array

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }
    left, right := 0, n-1
    for left < right {
        arr[left], arr[right] = arr[right], arr[left]
        left++
        right--
    }
    for i := 0; i < n; i++ {
        fmt.Println(arr[i])
    }
}

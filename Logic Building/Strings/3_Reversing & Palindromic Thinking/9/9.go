// Q9: Reverse only characters, keeping digits in place.
// Input: A string
// Output: Reversed characters, digits in original positions

package main

import (
    "fmt"
)

func main() {
    var s string
    fmt.Scanln(&s)
    arr := []rune(s)
    left, right := 0, len(arr)-1
    for left < right {
        if arr[left] >= '0' && arr[left] <= '9' {
            left++
        } else if arr[right] >= '0' && arr[right] <= '9' {
            right--
        } else {
            arr[left], arr[right] = arr[right], arr[left]
            left++
            right--
        }
    }
    fmt.Println(string(arr))
}

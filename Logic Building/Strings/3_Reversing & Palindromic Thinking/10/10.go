// Q10: Reverse string but skip spaces.
// Input: A string
// Output: Reversed string with spaces in original positions

package main

import "fmt"

func main() {
    var s string
    fmt.Scanln(&s)
    arr := []rune(s)
    left, right := 0, len(arr)-1
    for left < right {
        if arr[left] == ' ' {
            left++
        } else if arr[right] == ' ' {
            right--
        } else {
            arr[left], arr[right] = arr[right], arr[left]
            left++
            right--
        }
    }
    fmt.Println(string(arr))
}

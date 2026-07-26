// Q3: Print all numbers that are palindromes between 1-500.
// Input: None
// Output: All palindromic numbers 1-500

package main

import "fmt"

func main() {
    for i := 1; i <= 500; i++ {
        original, reversed, temp := i, 0, i
        for temp != 0 {
            reversed = reversed*10 + temp%10
            temp /= 10
        }
        if original == reversed {
            fmt.Println(i)
        }
    }
}

// Q5: Find the smallest and largest digit in a given number.
// Input: An integer
// Output: Smallest and largest digit

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    smallest, largest := 9, 0
    for n != 0 {
        digit := n % 10
        if digit < smallest {
            smallest = digit
        }
        if digit > largest {
            largest = digit
        }
        n /= 10
    }
    fmt.Printf("Smallest: %d\n", smallest)
    fmt.Printf("Largest: %d\n", largest)
}

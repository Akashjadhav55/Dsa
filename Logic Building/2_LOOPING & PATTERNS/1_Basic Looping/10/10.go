// Q10: Print the product of digits of a given number.
// Input: An integer
// Output: Product of all digits

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    product := 1
    for n > 0 {
        product *= n % 10
        n /= 10
    }
    fmt.Println(product)
}

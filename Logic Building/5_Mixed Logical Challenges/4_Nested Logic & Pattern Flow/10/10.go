// Q10: Print numbers in a spiral-like pattern (conceptual dry run).
// Input: An integer n
// Output: Spiral number pattern

package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    matrix := make([][]int, n)
    for i := range matrix {
        matrix[i] = make([]int, n)
    }
    num, top, bottom, left, right := 1, 0, n-1, 0, n-1
    for top <= bottom && left <= right {
        for i := left; i <= right; i++ {
            matrix[top][i] = num
            num++
        }
        top++
        for i := top; i <= bottom; i++ {
            matrix[i][right] = num
            num++
        }
        right--
        if top <= bottom {
            for i := right; i >= left; i-- {
                matrix[bottom][i] = num
                num++
            }
            bottom--
        }
        if left <= right {
            for i := bottom; i >= top; i-- {
                matrix[i][left] = num
                num++
            }
            left++
        }
    }
    for _, row := range matrix {
        for _, v := range row {
            fmt.Printf("%4d", v)
        }
        fmt.Println()
    }
}

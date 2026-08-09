// Q3: Check if a number is divisible by 5.
// Input: A single integer
// Output: "Divisible by 5" or "Not divisible by 5"

package main

import "fmt"

func main(){
    var num int
    fmt.Print("Enter the number :")
    fmt.Scan(&num)
    if num%5 == 0{
        fmt.Println("Divisible by 5")
    }else{
        fmt.Println("Divisible not")
    }
}


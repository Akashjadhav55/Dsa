// Q5: Check if a given year is a leap year.
// Input: A year (integer)
// Output: "Leap Year" or "Not a Leap Year"

package main

import "fmt"

func main() {
    // Write your solution here
    fmt.Print("Enter a year: ")
    var year int
    fmt.Scan(&year)
    if year%4 == 0 && year%400 == 0 || year%100 != 0 {
        fmt.Println("Leap Year")
    }else{
        fmt.Println("Not a Leap Year")

        





        


        
    }
}

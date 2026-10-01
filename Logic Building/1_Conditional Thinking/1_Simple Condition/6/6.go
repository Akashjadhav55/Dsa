// Q6: Take two numbers and print the larger one.
// Input: Two integers
// Output: The larger number

package main

import "fmt"

func main() {
    // Write your solution here
<<<<<<< Updated upstream
    fmt.Print("Enter a two numbers")
    var a, b int
    fmt.Scan(&a, &b)
    if(a>b){
        fmt.Print("Larger number is a", a)
    }else{
        fmt.Print("Large number is b"," ", b)
    }
=======
    var a, b int
    fmt.Scan(&a , &b);

    fmt.Println("The Larger number is:" max(a, b))

>>>>>>> Stashed changes
}

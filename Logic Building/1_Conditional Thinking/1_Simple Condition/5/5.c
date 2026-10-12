// Q5: Check if a given year is a leap year.
// Input: A year (integer)
// Output: "Leap Year" or "Not a Leap Year"

#include <stdio.h>

int main() {
    int n;
    // Write your solution here
    scanf(&n);
    if(n%4==0 && n%400==0 || n%100==0){
        prinf("leap year")
    }else{
        printf("not leap year");
    }


    return 0;
}
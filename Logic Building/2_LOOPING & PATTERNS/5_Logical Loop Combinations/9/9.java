// Q9: Print the sum of all odd digits and even digits separately in a number.
// Input: An integer
// Output: Sum of odd digits and sum of even digits

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int oddSum = 0, evenSum = 0;
        while (n != 0) {
            int digit = n % 10;
            if (digit % 2 == 0) {
                evenSum += digit;
            } else {
                oddSum += digit;
            }
            n /= 10;
        }
        System.out.println("Sum of odd digits: " + oddSum);
        System.out.println("Sum of even digits: " + evenSum);
    }
}

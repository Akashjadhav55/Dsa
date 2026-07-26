// Q5: Find the smallest and largest digit in a given number.
// Input: An integer
// Output: Smallest and largest digit

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int smallest = 9, largest = 0;
        while (n != 0) {
            int digit = n % 10;
            if (digit < smallest) smallest = digit;
            if (digit > largest) largest = digit;
            n /= 10;
        }
        System.out.println("Smallest: " + smallest);
        System.out.println("Largest: " + largest);
    }
}

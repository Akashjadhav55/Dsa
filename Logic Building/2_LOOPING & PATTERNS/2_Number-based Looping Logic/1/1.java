// Q1: Count the number of digits in a given number.
// Input: An integer
// Output: Number of digits

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;
        if (n == 0) {
            count = 1;
        }
        while (n != 0) {
            count++;
            n /= 10;
        }
        System.out.println(count);
    }
}

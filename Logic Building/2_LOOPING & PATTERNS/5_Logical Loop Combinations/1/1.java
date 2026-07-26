// Q1: Print all numbers whose sum of digits is even (1-100).
// Input: None
// Output: Numbers 1-100 with even digit sum

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 1; i <= 100; i++) {
            int sum = 0, temp = i;
            while (temp != 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum % 2 == 0) {
                System.out.println(i);
            }
        }
    }
}

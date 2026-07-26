// Q1: Print all numbers between 1 and N that are divisible by both 3 and 5.
// Input: An integer N
// Output: Numbers divisible by 15

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                System.out.println(i);
            }
        }
    }
}

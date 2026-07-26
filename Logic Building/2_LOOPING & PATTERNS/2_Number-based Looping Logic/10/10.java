// Q10: Print sum of first n terms of Fibonacci series.
// Input: An integer n
// Output: Sum of first n Fibonacci numbers

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = 0, b = 1, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a;
            int temp = a + b;
            a = b;
            b = temp;
        }
        System.out.println(sum);
    }
}

// Q5: Print sum of first n natural numbers recursively.
// Input: An integer n
// Output: Sum of 1+2+...+n

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(sum(n));
    }

    static int sum(int n) {
        if (n == 0) return 0;
        return n + sum(n - 1);
    }
}

// Q2: Count how many positive, negative, and zero elements are in an array.
// Input: Size n, then n integers
// Output: Count of each

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int pos = 0, neg = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            int val = sc.nextInt();
            if (val > 0) pos++;
            else if (val < 0) neg++;
            else zero++;
        }
        System.out.println("Positive: " + pos);
        System.out.println("Negative: " + neg);
        System.out.println("Zero: " + zero);
    }
}

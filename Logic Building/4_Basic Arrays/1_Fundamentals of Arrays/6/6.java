// Q6: Count how many elements are positive, negative, or zero.
// Input: Size n, then n integers
// Output: Count of positive, negative, and zero

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int pos = 0, neg = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] > 0) pos++;
            else if (arr[i] < 0) neg++;
            else zero++;
        }
        System.out.println("Positive: " + pos);
        System.out.println("Negative: " + neg);
        System.out.println("Zero: " + zero);
    }
}

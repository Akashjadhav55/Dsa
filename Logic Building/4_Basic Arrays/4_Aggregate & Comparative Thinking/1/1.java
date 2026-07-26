// Q1: Compare two arrays - check if they are equal (same elements and order).
// Input: Size n, two arrays of n elements
// Output: "Equal" or "Not Equal"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        for (int i = 0; i < n; i++) b[i] = sc.nextInt();
        boolean equal = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                equal = false;
                break;
            }
        }
        System.out.println(equal ? "Equal" : "Not Equal");
    }
}

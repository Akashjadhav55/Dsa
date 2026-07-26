// Q3: Merge two arrays into a third array.
// Input: Size n and m, two arrays
// Output: Merged array

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        int m = sc.nextInt();
        int[] b = new int[m];
        for (int i = 0; i < m; i++) b[i] = sc.nextInt();
        int[] merged = new int[n + m];
        for (int i = 0; i < n; i++) merged[i] = a[i];
        for (int i = 0; i < m; i++) merged[n + i] = b[i];
        for (int i = 0; i < n + m; i++) {
            System.out.println(merged[i]);
        }
    }
}

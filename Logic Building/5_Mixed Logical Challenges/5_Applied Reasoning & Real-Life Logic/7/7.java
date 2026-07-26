// Q7: Find common elements between two arrays.
// Input: Size n and m, two arrays
// Output: Common elements

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
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i] == b[j]) {
                    System.out.print(a[i] + " ");
                    b[j] = Integer.MIN_VALUE;
                    break;
                }
            }
        }
        System.out.println();
    }
}

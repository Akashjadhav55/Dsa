// Q2: Compare two arrays - check if they contain the same elements (ignore order).
// Input: Size n, two arrays of n elements
// Output: "Same Elements" or "Different Elements"

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        for (int i = 0; i < n; i++) b[i] = sc.nextInt();
        Arrays.sort(a);
        Arrays.sort(b);
        boolean same = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                same = false;
                break;
            }
        }
        System.out.println(same ? "Same Elements" : "Different Elements");
    }
}

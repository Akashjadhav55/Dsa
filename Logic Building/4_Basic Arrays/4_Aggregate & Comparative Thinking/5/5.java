// Q5: Find elements that are in one array but not in the other.
// Input: Size n and m, two arrays
// Output: Elements only in first array

import java.util.Scanner;
import java.util.HashSet;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        int m = sc.nextInt();
        HashSet<Integer> setB = new HashSet<>();
        for (int i = 0; i < m; i++) {
            int x = sc.nextInt();
            setB.add(x);
        }
        for (int i = 0; i < n; i++) {
            if (!setB.contains(a[i])) {
                System.out.println(a[i]);
            }
        }
    }
}

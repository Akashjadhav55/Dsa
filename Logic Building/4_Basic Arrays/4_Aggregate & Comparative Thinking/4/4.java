// Q4: Find the common elements between two arrays.
// Input: Size n and m, two arrays
// Output: Common elements

import java.util.Scanner;
import java.util.HashSet;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        HashSet<Integer> setA = new HashSet<>();
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            setA.add(a[i]);
        }
        int m = sc.nextInt();
        int[] b = new int[m];
        for (int i = 0; i < m; i++) {
            b[i] = sc.nextInt();
        }
        for (int i = 0; i < m; i++) {
            if (setA.contains(b[i])) {
                System.out.println(b[i]);
                setA.remove(b[i]);
            }
        }
    }
}

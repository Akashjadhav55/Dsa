// Q6: Count how many elements are common between two arrays.
// Input: Size n and m, two arrays
// Output: Count of common elements

import java.util.Scanner;
import java.util.HashSet;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HashSet<Integer> setA = new HashSet<>();
        for (int i = 0; i < n; i++) setA.add(sc.nextInt());
        int m = sc.nextInt();
        int count = 0;
        for (int i = 0; i < m; i++) {
            int x = sc.nextInt();
            if (setA.contains(x)) {
                count++;
                setA.remove(x);
            }
        }
        System.out.println(count);
    }
}

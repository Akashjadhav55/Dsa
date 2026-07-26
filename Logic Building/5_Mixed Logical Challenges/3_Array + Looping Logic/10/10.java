// Q10: Find the sum of all elements at odd indices.
// Input: Size n, then n integers
// Output: Sum of elements at odd indices

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int v = sc.nextInt();
            if (i % 2 != 0) sum += v;
        }
        System.out.println(sum);
    }
}

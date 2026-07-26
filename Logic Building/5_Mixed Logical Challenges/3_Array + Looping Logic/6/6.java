// Q6: Count how many elements are even at an even index.
// Input: Size n, then n integers
// Output: Count

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int val = sc.nextInt();
            if (i % 2 == 0 && val % 2 == 0) count++;
        }
        System.out.println(count);
    }
}

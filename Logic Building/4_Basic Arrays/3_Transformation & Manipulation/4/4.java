// Q4: Replace all even numbers with 1 and all odd with 0.
// Input: Size n, then n integers
// Output: Modified array

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }
    }
}

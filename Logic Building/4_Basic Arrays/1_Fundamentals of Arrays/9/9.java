// Q9: Find the index of the minimum element.
// Input: Size n, then n integers
// Output: Index of minimum element

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int minIdx = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[minIdx]) {
                minIdx = i;
            }
        }
        System.out.println(minIdx);
    }
}

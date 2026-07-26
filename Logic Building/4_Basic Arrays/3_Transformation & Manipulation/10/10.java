// Q10: Copy one array to another manually.
// Input: Size n, then n integers
// Output: Copied array

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int[] copy = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            copy[i] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            System.out.println(copy[i]);
        }
    }
}

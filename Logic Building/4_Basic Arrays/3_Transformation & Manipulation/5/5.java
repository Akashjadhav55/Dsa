// Q5: Swap the first and last elements of the array.
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
        int temp = arr[0];
        arr[0] = arr[n - 1];
        arr[n - 1] = temp;
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }
}

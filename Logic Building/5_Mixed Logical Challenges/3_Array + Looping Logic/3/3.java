// Q3: Print all unique elements from an array.
// Input: Size n, then n integers
// Output: Unique elements

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        for (int i = 0; i < n; i++) {
            boolean unique = true;
            for (int j = 0; j < n; j++) {
                if (i != j && arr[i] == arr[j]) { unique = false; break; }
            }
            if (unique) System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

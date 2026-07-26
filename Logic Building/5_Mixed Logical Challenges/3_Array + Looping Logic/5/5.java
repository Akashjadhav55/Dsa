// Q5: Shift all zeros to the end of the array.
// Input: Size n, then n integers
// Output: Array with zeros at end

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) arr[idx++] = arr[i];
        }
        while (idx < n) arr[idx++] = 0;
        for (int v : arr) System.out.print(v + " ");
        System.out.println();
    }
}

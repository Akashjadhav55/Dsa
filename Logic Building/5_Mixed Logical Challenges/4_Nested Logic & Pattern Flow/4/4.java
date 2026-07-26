// Q4: Check if an array is sorted (ascending or descending).
// Input: Size n, then n integers
// Output: "Ascending", "Descending", or "Not Sorted"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        boolean asc = true, desc = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) asc = false;
            if (arr[i] < arr[i + 1]) desc = false;
        }
        if (asc) System.out.println("Ascending");
        else if (desc) System.out.println("Descending");
        else System.out.println("Not Sorted");
    }
}

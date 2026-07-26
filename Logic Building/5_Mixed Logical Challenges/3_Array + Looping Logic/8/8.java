// Q8: Find the second largest element in an array.
// Input: Size n, then n integers
// Output: Second largest element

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int largest = Integer.MIN_VALUE, second = Integer.MIN_VALUE;
        for (int v : arr) {
            if (v > largest) { second = largest; largest = v; }
            else if (v > second && v != largest) { second = v; }
        }
        System.out.println(second);
    }
}

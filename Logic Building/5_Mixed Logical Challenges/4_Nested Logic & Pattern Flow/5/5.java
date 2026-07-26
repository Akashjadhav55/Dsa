// Q5: Count how many times a number appears consecutively in an array.
// Input: Size n, then n integers
// Output: Consecutive occurrence counts

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                System.out.println(arr[i - 1] + " appears " + count + " times");
                count = 1;
            }
        }
        System.out.println(arr[n - 1] + " appears " + count + " times");
    }
}

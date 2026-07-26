// Q6: Find the sum of all elements except the largest and smallest.
// Input: Size n, then n integers
// Output: Sum excluding max and min

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int sum = 0;
        int max = arr[0];
        int min = arr[0];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            sum += arr[i];
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }
        System.out.println(sum - max - min);
    }
}

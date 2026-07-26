// Q10: Count how many elements are perfect squares.
// Input: Size n, then n integers
// Output: Count of perfect squares

import java.util.Scanner;

public class Main {
    public static boolean isPerfectSquare(int num) {
        if (num < 0) return false;
        int sqrt = (int) Math.sqrt(num);
        return sqrt * sqrt == num;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (isPerfectSquare(arr[i])) count++;
        }
        System.out.println(count);
    }
}

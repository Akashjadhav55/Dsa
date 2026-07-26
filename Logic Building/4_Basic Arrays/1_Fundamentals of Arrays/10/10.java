// Q10: Take n elements and print only those greater than a given value k.
// Input: Size n, n integers, and value k
// Output: Elements greater than k

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        for (int i = 0; i < n; i++) {
            if (arr[i] > k) {
                System.out.println(arr[i]);
            }
        }
    }
}

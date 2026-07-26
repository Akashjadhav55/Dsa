// Q3: Find the first occurrence of a given number.
// Input: Size n, n integers, element x
// Output: Index of first occurrence (-1 if not found)

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int x = sc.nextInt();
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                idx = i;
                break;
            }
        }
        System.out.println(idx);
    }
}

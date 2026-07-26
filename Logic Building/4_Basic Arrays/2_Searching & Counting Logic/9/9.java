// Q9: Count how many numbers are divisible by 3 and 5 both.
// Input: Size n, then n integers
// Output: Count of numbers divisible by 15

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
                count++;
            }
        }
        System.out.println(count);
    }
}

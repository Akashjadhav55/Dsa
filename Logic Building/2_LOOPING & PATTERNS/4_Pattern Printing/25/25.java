// Q25: Print number pyramid (1, 232, 34543, 4567654).
// Input: An integer n
// Output: Number pyramid pattern

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            for (int j = 0; j < i; j++) {
                System.out.print(i + j);
            }
            for (int j = i - 2; j >= 0; j--) {
                System.out.print(i + j);
            }
            System.out.println();
        }
    }
}

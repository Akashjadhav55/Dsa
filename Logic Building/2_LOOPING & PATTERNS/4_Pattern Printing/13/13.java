// Q13: Print consecutive numbers pattern (1, 23, 456, 78910).
// Input: An integer n
// Output: Continuous number pattern

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int num = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(num);
                num++;
            }
            System.out.println();
        }
    }
}

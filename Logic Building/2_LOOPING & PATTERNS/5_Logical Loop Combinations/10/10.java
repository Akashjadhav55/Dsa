// Q10: Take 5 numbers as input. If user enters 0, skip it. Print sum of all non-zero numbers.
// Input: 5 integers
// Output: Sum of non-zero numbers

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            int n = sc.nextInt();
            if (n != 0) {
                sum += n;
            }
        }
        System.out.println(sum);
    }
}

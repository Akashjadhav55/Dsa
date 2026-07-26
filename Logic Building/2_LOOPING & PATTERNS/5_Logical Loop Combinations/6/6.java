// Q6: Print all numbers from 1-n whose binary representation has an even number of 1s.
// Input: An integer n
// Output: Numbers with even set bits

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            int count = 0, temp = i;
            while (temp != 0) {
                count += temp & 1;
                temp >>= 1;
            }
            if (count % 2 == 0) {
                System.out.println(i);
            }
        }
    }
}

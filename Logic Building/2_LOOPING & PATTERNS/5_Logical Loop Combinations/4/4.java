// Q4: Print numbers between 1-100 whose digits add up to a multiple of 3.
// Input: None
// Output: Numbers with digit sum divisible by 3

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 1; i <= 100; i++) {
            int sum = 0, temp = i;
            while (temp != 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum % 3 == 0) {
                System.out.println(i);
            }
        }
    }
}

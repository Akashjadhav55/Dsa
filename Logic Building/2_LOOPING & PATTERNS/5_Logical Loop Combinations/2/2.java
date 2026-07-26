// Q2: Count how many numbers between 1-500 are divisible by 7 but not by 5.
// Input: None
// Output: Count of such numbers

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = 0;
        for (int i = 1; i <= 500; i++) {
            if (i % 7 == 0 && i % 5 != 0) {
                count++;
            }
        }
        System.out.println(count);
    }
}

// Q6: Print frequency of each digit in a number.
// Input: An integer
// Output: Frequency of digits 0-9

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long num = sc.nextLong();
        int[] freq = new int[10];
        if (num == 0) freq[0] = 1;
        while (num > 0) {
            freq[(int)(num % 10)]++;
            num /= 10;
        }
        for (int i = 0; i < 10; i++) {
            if (freq[i] > 0) System.out.println(i + " : " + freq[i]);
        }
    }
}

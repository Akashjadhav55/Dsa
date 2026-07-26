// Q4: Print all Armstrong numbers between 1 and 1000.
// Input: None
// Output: Armstrong numbers from 1 to 1000

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        for (int num = 1; num <= 1000; num++) {
            int temp = num, digits = 0;
            while (temp > 0) { digits++; temp /= 10; }
            temp = num;
            int sum = 0;
            while (temp > 0) {
                int d = temp % 10;
                sum += Math.pow(d, digits);
                temp /= 10;
            }
            if (sum == num) System.out.println(num);
        }
    }
}

// Q3: Check if a number is an Armstrong number.
// Input: An integer
// Output: "Armstrong Number" or "Not an Armstrong Number"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int temp = num, digits = 0;
        while (temp > 0) { digits++; temp /= 10; }
        temp = num;
        int sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            sum += Math.pow(d, digits);
            temp /= 10;
        }
        if (sum == num)
            System.out.println("Armstrong Number");
        else
            System.out.println("Not an Armstrong Number");
    }
}

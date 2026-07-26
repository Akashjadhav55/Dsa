// Q6: Count how many even digits a number contains.
// Input: An integer
// Output: Count of even digits

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int count = 0;
        while (num > 0) {
            if ((num % 10) % 2 == 0) count++;
            num /= 10;
        }
        System.out.println(count);
    }
}

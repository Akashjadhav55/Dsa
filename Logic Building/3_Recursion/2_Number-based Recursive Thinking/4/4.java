// Q4: Find product of digits of a number recursively.
// Input: An integer
// Output: Product of digits

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(productOfDigits(n));
    }

    static int productOfDigits(int n) {
        if (n == 0) return 1;
        return (n % 10) * productOfDigits(n / 10);
    }
}

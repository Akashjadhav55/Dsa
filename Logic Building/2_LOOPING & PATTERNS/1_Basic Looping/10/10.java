// Q10: Print the product of digits of a given number.
// Input: An integer
// Output: Product of all digits

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int product = 1;
        while (n > 0) {
            product *= n % 10;
            n /= 10;
        }
        System.out.println(product);
    }
}

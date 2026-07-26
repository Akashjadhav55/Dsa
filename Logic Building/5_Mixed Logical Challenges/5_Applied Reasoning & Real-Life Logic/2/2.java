// Q2: Take age inputs and count how many are adults, minors, seniors.
// Input: Number of people, then their ages
// Output: Count of adults (18-60), minors (<18), seniors (>60)

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int adults = 0, minors = 0, seniors = 0;
        for (int i = 0; i < n; i++) {
            int age = sc.nextInt();
            if (age < 18) minors++;
            else if (age <= 60) adults++;
            else seniors++;
        }
        System.out.println("Adults: " + adults);
        System.out.println("Minors: " + minors);
        System.out.println("Seniors: " + seniors);
    }
}

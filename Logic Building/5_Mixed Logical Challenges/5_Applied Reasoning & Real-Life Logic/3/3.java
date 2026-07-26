// Q3: Validate a password (at least one uppercase, lowercase, digit, special char).
// Input: A password string
// Output: "Valid" or "Invalid"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String pwd = sc.next();
        boolean hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
        for (char c : pwd.toCharArray()) {
            if (Character.isUpperCase(c)) hasUpper = true;
            else if (Character.isLowerCase(c)) hasLower = true;
            else if (Character.isDigit(c)) hasDigit = true;
            else hasSpecial = true;
        }
        if (hasUpper && hasLower && hasDigit && hasSpecial)
            System.out.println("Valid");
        else
            System.out.println("Invalid");
    }
}

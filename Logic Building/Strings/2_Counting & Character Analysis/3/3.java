// Q3: Count how many uppercase and lowercase letters a string has.
// Input: A string
// Output: Uppercase count and lowercase count

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int upper = 0, lower = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isUpperCase(c)) upper++;
            else if (Character.isLowerCase(c)) lower++;
        }
        System.out.println("Uppercase: " + upper);
        System.out.println("Lowercase: " + lower);
    }
}

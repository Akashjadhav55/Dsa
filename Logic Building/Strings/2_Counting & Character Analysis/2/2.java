// Q2: Count the number of digits, letters, and special characters.
// Input: A string
// Output: Count of digits, letters, and special characters

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int digits = 0, letters = 0, special = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isDigit(c)) digits++;
            else if (Character.isLetter(c)) letters++;
            else if (c != ' ') special++;
        }
        System.out.println("Digits: " + digits);
        System.out.println("Letters: " + letters);
        System.out.println("Special characters: " + special);
    }
}

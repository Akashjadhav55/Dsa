// Q5: Print the string after removing all digits.
// Input: A string
// Output: String without digits

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String result = "";
        for (int i = 0; i < s.length(); i++) {
            if (!Character.isDigit(s.charAt(i))) {
                result += s.charAt(i);
            }
        }
        System.out.println(result);
    }
}

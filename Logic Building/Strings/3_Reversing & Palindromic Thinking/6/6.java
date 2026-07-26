// Q6: Print the middle character(s) of a string.
// Input: A string
// Output: Middle character(s)

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int len = s.length();
        if (len % 2 == 0) {
            System.out.println(s.charAt(len / 2 - 1) + "" + s.charAt(len / 2));
        } else {
            System.out.println(s.charAt(len / 2));
        }
    }
}

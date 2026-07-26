// Q7: Print the second half of the string in reverse.
// Input: A string
// Output: Second half reversed

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int mid = s.length() / 2;
        String rev = "";
        for (int i = s.length() - 1; i >= mid; i--) {
            rev += s.charAt(i);
        }
        System.out.println(rev);
    }
}

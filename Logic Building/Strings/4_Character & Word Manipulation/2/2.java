// Q2: Remove all spaces from a string.
// Input: A string
// Output: String without spaces

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println(s.replace(" ", ""));
    }
}

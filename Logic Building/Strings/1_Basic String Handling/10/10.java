// Q10: Check whether the string is empty or not.
// Input: A string
// Output: "Empty" or "Not Empty"

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if (s.isEmpty()) System.out.println("Empty");
        else System.out.println("Not Empty");
    }
}

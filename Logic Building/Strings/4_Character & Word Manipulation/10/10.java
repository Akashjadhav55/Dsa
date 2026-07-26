// Q10: Shift each character by 1 ("abc" -> "bcd").
// Input: A string
// Output: Each character shifted by 1

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String result = "";
        for (int i = 0; i < s.length(); i++) {
            result += (char) (s.charAt(i) + 1);
        }
        System.out.println(result);
    }
}

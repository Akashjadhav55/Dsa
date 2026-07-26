// Q8: Remove consecutive duplicates ("aaabb" -> "ab").
// Input: A string
// Output: String without consecutive duplicates

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String result = "";
        for (int i = 0; i < s.length(); i++) {
            if (i == 0 || s.charAt(i) != s.charAt(i - 1)) {
                result += s.charAt(i);
            }
        }
        System.out.println(result);
    }
}

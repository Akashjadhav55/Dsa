// Q3: Replace all vowels with '*'.
// Input: A string
// Output: String with vowels replaced by '*'

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String result = "";
        for (int i = 0; i < s.length(); i++) {
            char c = Character.toLowerCase(s.charAt(i));
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                result += '*';
            } else {
                result += s.charAt(i);
            }
        }
        System.out.println(result);
    }
}

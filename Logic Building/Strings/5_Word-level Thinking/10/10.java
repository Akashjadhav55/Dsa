// Q10: Remove extra spaces between words.
// Input: A sentence
// Output: Sentence with single spaces

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine().trim();
        System.out.println(s.replaceAll("\\s+", " "));
    }
}

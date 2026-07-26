// Q9: Print how many words start with a vowel.
// Input: A sentence
// Output: Count of words starting with a vowel

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().trim().split("\\s+");
        int count = 0;
        for (String w : words) {
            char first = Character.toLowerCase(w.charAt(0));
            if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') count++;
        }
        System.out.println(count);
    }
}

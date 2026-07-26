// Q8: Capitalize the first letter of each word.
// Input: A sentence
// Output: Sentence with capitalized first letters

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().trim().split("\\s+");
        for (int i = 0; i < words.length; i++) {
            words[i] = Character.toUpperCase(words[i].charAt(0)) + words[i].substring(1).toLowerCase();
        }
        System.out.println(String.join(" ", words));
    }
}

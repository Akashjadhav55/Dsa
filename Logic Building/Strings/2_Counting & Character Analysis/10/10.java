// Q10: Count how many words end with 's'.
// Input: A sentence
// Output: Count of words ending with 's'

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().trim().split("\\s+");
        int count = 0;
        for (String w : words) {
            if (w.charAt(w.length() - 1) == 's') count++;
        }
        System.out.println(count);
    }
}

// Q2: Count how many words have even length.
// Input: A sentence
// Output: Count of even-length words

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().trim().split("\\s+");
        int count = 0;
        for (String w : words) {
            if (w.length() % 2 == 0) count++;
        }
        System.out.println(count);
    }
}

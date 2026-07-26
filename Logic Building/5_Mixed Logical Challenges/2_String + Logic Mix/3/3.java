// Q3: Reverse words in a string if their length is even.
// Input: A sentence
// Output: Modified sentence

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        StringBuilder sb = new StringBuilder();
        for (String w : words) {
            if (w.length() % 2 == 0) {
                sb.append(new StringBuilder(w).reverse().toString());
            } else {
                sb.append(w);
            }
            sb.append(" ");
        }
        System.out.println(sb.toString().trim());
    }
}

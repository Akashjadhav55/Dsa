// Q7: Toggle case for every alternate word in a sentence.
// Input: A sentence
// Output: Modified sentence

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] words = sc.nextLine().split(" ");
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < words.length; i++) {
            if (i % 2 == 1) {
                StringBuilder temp = new StringBuilder();
                for (char c : words[i].toCharArray()) {
                    if (Character.isUpperCase(c)) temp.append(Character.toLowerCase(c));
                    else temp.append(Character.toUpperCase(c));
                }
                sb.append(temp);
            } else {
                sb.append(words[i]);
            }
            sb.append(" ");
        }
        System.out.println(sb.toString().trim());
    }
}

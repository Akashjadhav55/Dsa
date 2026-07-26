// Q4: Replace all spaces with '_'.
// Input: A string
// Output: String with spaces replaced by '_'

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println(s.replace(" ", "_"));
    }
}

// Q3: Print all odd numbers between 1 and 100.
// Input: None
// Output: All odd numbers from 1 to 99

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 1; i <= 100; i += 2) {
            System.out.println(i);
        }
    }
}

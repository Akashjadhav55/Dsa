// Q9: Reverse only characters, keeping digits in place.
// Input: A string
// Output: Reversed characters, digits in original positions

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char[] arr = s.toCharArray();
        int left = 0, right = arr.length - 1;
        while (left < right) {
            if (Character.isDigit(arr[left])) left++;
            else if (Character.isDigit(arr[right])) right--;
            else {
                char temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
                right--;
            }
        }
        System.out.println(new String(arr));
    }
}

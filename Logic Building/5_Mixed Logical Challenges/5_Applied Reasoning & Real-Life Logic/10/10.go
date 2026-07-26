// Q10: Print all palindromic words from a sentence.
// Input: A sentence
// Output: Palindromic words

package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func isPalindrome(s string) bool {
    runes := []rune(s)
    for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
        if runes[i] != runes[j] {
            return false
        }
    }
    return true
}

func main() {
    reader := bufio.NewReader(os.Stdin)
    line, _ := reader.ReadString('\n')
    line = strings.TrimSpace(line)
    for _, w := range strings.Fields(line) {
        if isPalindrome(string(w)) {
            fmt.Println(w)
        }
    }
}

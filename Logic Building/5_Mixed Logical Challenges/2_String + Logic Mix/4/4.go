// Q4: Replace every vowel in a string with its position (a=1, e=2...).
// Input: A string
// Output: Vowels replaced with positions

package main

import (
    "bufio"
    "fmt"
    "os"
    "strings"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    line, _ := reader.ReadString('\n')
    line = strings.TrimSpace(strings.ToLower(line))
    vowels := "aeiou"
    result := ""
    for _, c := range line {
        pos := strings.IndexRune(vowels, c)
        if pos != -1 {
            result += fmt.Sprintf("%d", pos+1)
        } else {
            result += string(c)
        }
    }
    fmt.Println(result)
}

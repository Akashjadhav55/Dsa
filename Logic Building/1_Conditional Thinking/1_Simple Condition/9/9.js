// Q9: Take a character and check if it's a vowel or consonant.
// Input: A single character
// Output: "Vowel" or "Consonant"

// Write your solution here



const readline = require("readline").createInterface({ input : process.stdin});
readline.on("line", (line) => {
    const n = line.trim().split(",")
    
    for(let i = 0; i < n.length; i++){
        if(n[i] == "a" || n[i] == "e" || n[i] == "i" || n[i] == "o" || n[i] == "u" ){
            console.log("it is vowel" + n[i]);
        }else{
            console.log("consonant" + n[i])
        }
    }



    readline.close()
})
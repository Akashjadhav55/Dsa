//Create program that categorizes a person’s age into different groups: child, teenager, adult, or senior.

// process.stdout.write('Enter Your Name: ');
// process.stdin.on('data', (data) => {
//     const input = data.toString().trim();
//     console.log(`Your Name is: ${input}`);
//     process.exit();
// });

let age = 55

let ageClassifier = (age) =>{
    if(age < 18){
        console.log("child")
    }
    else if(age > 18 && 50 < age){
        console.log("adult")
    }
    else{
        console.log("senior")
    }
 
}

ageClassifier(age)
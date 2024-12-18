//Function to print the  odd numbers in a word
function printOddNumbers(numbers){
        for(let i=0;i<numbers.length;i++){
        if( numbers[i] % 2 !=0){
            console.log(numbers[i])
        }
    }
}
let numbersList =[1,2,3,4,5,6,7,8,9]
printOddNumbers(numbersList)
//
function printName(name){
    console.log(name)
}
function printVowels(name){
    let vowels = ['a','e','i','o','u']
    let vowelList =""
    for (let i=0;i<name.length;i++){
        let char = name[i]
        for(let j=0;j<vowels.length;j++){
            if(char==vowels[j]){
                vowelList +=char+","
                break;
            } }
    }
    console.log(vowelList)
}
printVowels("Rwanda yacu")
//Function to vowels from a word
//count from 1 to 10
// return of the numbers
//for loops
function addNumbers(){
    let sum =0;
    for(let i=0;i<=10;i++){
        sum +=i
    }
    return sum
}
console.log(addNumbers())
//while approach
function addNumberWhile(){
let count = 0
let sum = 0
while(count<10){
    sum +=count
    console.log(sum)
    count++
}
return sum
}
//do while
function addNumbersDoWhile(){
    let count = 0
    let sum = 0
    do{
        sum +=sum + count
        console.log(sum)
        count++
    }while(count<10)
}
// write a function to add odd numbers between 10 and 50
// 11,13,15,......,49
// write a function to add 3 to each number below
function addThreeToList(numbers){
    for(let i=0;i<numbers.length;i++){
        numbers[i]+=3
    }
    console.log(numbers)
}
addThreeToList([1,2,3,4,5,6,7,8,9])
function removeVowels(name){
    const vowels = ['a','e','i','o','u','A','E','I','O','U']
    let newName = ""
    //loop through the name
    for(let i = 0; i<name.length; i++){
        let isVowel = false
        for(let j=0; j<vowels.length; j++){
            if(name[i]==vowels[j]){
                console.log(name[i] +"is a vowel")
                isVowel = true
                break
            }
        }
        if(!isVowel){
            newName = newName+name[i]
        }
    }
    console.log(newName)
}
removeVowels("Daah Damn")
//Alternative
function removeVowels(name){
    const vowels = ['a','e','i','o','u','A','E','I','O','U']
    let newName = ""
    //loop through the name
    for(let i = 0; i<name.length; i++){
        let isVowel = false
        //loop through the vowels
        for(let j=0; j<vowels.length; j++){
            if(name[i]==vowels[j]){
                isVowel = true
                break
            }
        }
        if(!isVowel){
            newName += name[i]
        }
    }
    console.log(newName)
}
removeVowels("Damn Daah")
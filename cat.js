
let numbers=[1,2,4,6,7,8,9,10]
function print(numbers){
    for(i of numbers)
        if( i % 2 !==0){
            console.log(i)
        }
        
    }
print(numbers)
const user={name: "Alice", age:25}
for(key in user){
    if(user.hasOwnProperty(key)){
        console.log(`${key}: ${user[key]}`)
    }
}

let number1 =  10
let number2 = number1++
console.log(`value of number1 is ${number1}`)
console.log("value of number2 is "+number2)

console.log(gender=="male"?"Good morning sir":"Good morning ms")
let student ="Zion"
let firstName = "Nikita"
console.log(firstName)
console.log("Teacher said:\"Come\"\"\"\"\" early and meet new student called:\""+student)
console.log(`Teacher said:"Come""""" early and meet new student called:"${student}`)

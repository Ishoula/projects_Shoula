function printOddNumbers(damn){
    for(i=0; i<damn.length; i++){
        if (damn[i]%2!=0){
            console.log(damn[i])
        }
    }
}
let damn=[1,2,3,4,5,6,6,7,8,1]
printOddNumbers(damn)
function printOddNumbers(numbers){
    for(i of numbers){
        if (i%2!=0){
            console.log(i)
        }
    }
}
printOddNumbers(damn)
let x=undefined
let y=null
console.log(y,x)
console.log(typeof NAN)
console.log(typeof y)
let person={
    name: 'Shoula',
    age: 15
}
person.name='Damn girl'
let username=['Shoula']
person[username]='Stuck'
console.log(person)
function greet(name){
    return `Hello, ${name}`
}
console.log(greet("Shoula"))

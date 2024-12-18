let user={
    name: "Shoula",
    status:"Singular" ,
    age:15,
    isAdmin:false
}
console.log(user)
let num1=23
let num2=num1
num1=15
console.log(num1,num2)
let text = "Hello Shoula"
let upper= text.toUpperCase()
let lower=text.toLowerCase()
console.log(text)
console.log(upper)
console.log(lower)
let extracted=text.slice(0,4)
console.log(extracted)
let originalString="Hello Damn girl"
console.log(originalString, "It's been a long time")
originalString[0]="h"
console.log(originalString)
let newString=originalString + " I'm stuck"
console.log(newString)
console.log(originalString)
let family=["marriage","mom","father","children"]
family.push("grandma","grandpa","nanny")
console.log(family)
family.pop()
console.log(family)
family.shift()
console.log(family)
family.unshift("God")
console.log(family)
// family.splice(1,1,"Bible")
// console.log(family)
// family.forEach(function(item,index){
//     console.log(item,index)
// })
// console.log(text[0])
// text[0]="h"
// console.log(text)
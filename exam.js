function factorial(num){
    let fact=1
    for(i=1; i<=num; i++ ){
        fact *=i
    }
    return fact

}
console.log(factorial(5))


function add(num1,num2){
    return num1+num2
}
console.log(add(12,43))

function sreverse(word){
    return word.split("").reverse().join('')
}
console.log(sreverse("Hello"))
let firstName="Foe"
let lastName="Doe"
console.log("My name is "+firstName+" "+lastName)
for(var i=0; i<3; i++){
    setTimeout(function(){
        console.log(i)
    },1000)
}
// i) Declare an array variable
let students;

// ii) Initialize it above variable with names of students; James, John, Ivan, Gilbert
students = ['James', 'John', 'Ivan', 'Gilbert'];

// iii) Replace Ivan with Norman and John with Kenny
students[2] = 'Norman';
students[1] = 'Kenny';

// iv) Print out the student at last index
console.log(students[-1]);
console.log(students)

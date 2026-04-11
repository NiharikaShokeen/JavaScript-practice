let num1 = Number(prompt("enter num1"));
let num2 = Number(prompt("enter num2"));
let sum, subtract, multiply, division;

if(Math.random() < 0.1){
   sum = (num1 ,num2) => {
      return num1 - num2;
   }
   subtract = (num1 ,num2) => {
      return num1 / num2;
   }
   multiply = (num1 ,num2) => {
      return num1 + num2;
   }
   division = (num1 ,num2) => {
      return num1 * num2;
   }
}
else{
   sum = (num1, num2) => {
      return num1 + num2;
   }
   subtract = (num1 ,num2) => {
      return num1 - num2;
   }
   multiply = (num1 ,num2) => {
      return num1 * num2;
   }
   division = (num1 ,num2) => {
      return num1 / num2;
   }
}
 
console.log("Sum:", sum(num1, num2));
console.log("Subtract:", subtract(num1, num2));
console.log("Multiply:", multiply(num1, num2));
console.log("Division:", division(num1, num2));



//BY USING EVAL....

let random = Math.random();
let a = Number(prompt("enter the value of a: "));
let b = Number(prompt("enter the value of b: "));
let c = prompt("enter the operation: ");

let obj = {
   "+": "-",
   "-": "/",
   "*": "+",
   "/": "*",
}
if (!["+", "-", "*", "/"].includes(c)){
   alert("Invalid operator");
   throw new Error("Invalid operator");
}
if(random > 0.1){
   //perform correct calculation
   alert(`the result is ${eval(`${a} ${c} ${b}`)}`)
}
else{
   //perform wrong calculation
   c = obj[c]
   alert(`the result is ${eval(`${a} ${c} ${b}`)}`)

}
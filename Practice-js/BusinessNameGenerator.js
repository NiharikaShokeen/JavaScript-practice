//generating random names without using array

let first, second, third;

//First
let r1 = Math.random();
if(r1 < 0.33){
    first = "crazy";
}
else if(r1 < 0.66 && r1>= 0.33){
    first = "Amazing"
}
else {
    first ="Fire"
}

//Second
let r2 = Math.random();
if(r2 < 0.33){
    second = "Engine";
}
else if(r2 < 0.66 && r2>= 0.33){
    second = "Foods"
}
else {
    second ="Garments"
}

//Third
let r3 = Math.random();
if(r3 < 0.33){
    third = "bros";
}
else if(r3 < 0.66 && r3>= 0.33){
    third = "Limited"
}
else {
    third ="hub"
}

console.log(` ${first} ${second} ${third}`)
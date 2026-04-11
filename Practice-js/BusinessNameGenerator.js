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


//method2
let obj1 = {
    1: "Crazy",
    2: "Amazing",
    3: "Fire"
}
let obj2 = {
    1: "Engine",
    2: "Foods",
    3: "Garments",
}
let obj3 = {
    1: "Bros",
    2:"Limited",
    3: "Hub",
}

var ran1 = Math.floor(Math.random() *3) +1;
var ran2 = Math.floor(Math.random() *3) +1;
var ran3 = Math.floor(Math.random() *3) +1;

console.log(obj1[ran1]+ " "+obj2[ran2]+" "+obj3[ran3]);
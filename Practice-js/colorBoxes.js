
//generate random colors of text and bg of boxes..
let boxes1 = document.querySelector(".container").children;

function getRandomColor(){
    // randomNum(0 to 255)= 0 + random(0to1) * 255 ;
    let var1 = Math.ceil(Math.random()* 255);
    let var2 = Math.ceil(Math.random()* 255);
    let var3 = Math.ceil(Math.random()* 255);

    return(` rgb(${var1} ${var2} ${var3}) `);
}
Array.from(boxes1).forEach(e=>{
    e.style.backgroundColor = getRandomColor();
    e.style.color = getRandomColor();
})



//using hexadecimal

var boxes2 = document.querySelectorAll(".box");

for(var i=0 ; i< boxes2.length; i++){
    var box = boxes2[i];

    //generate random color (16777215 is white in decimal)
    var randomColor = "#" + Math.floor(Math.random()*16777215).toString(16);

    //generate random bg color
    var randomBg = "#" + Math.floor(Math.random()*16777215).toString(16);

    //asign random color and Bg
    box.style.color = randomColor;
    box.style.backgroundColor = randomBg;

    //set content to show color code
    box.textContent = randomColor;
}
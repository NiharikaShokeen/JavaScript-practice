
//generate random colors of text and bg of boxes..
let boxes = document.querySelector(".container").children;

function getRandomColor(){
    // randomNum(0 to 255)= 0 + random(0to1) * 255 ;
    let var1 = Math.ceil(Math.random()* 255);
    let var2 = Math.ceil(Math.random()* 255);
    let var3 = Math.ceil(Math.random()* 255);

    return(` rgb(${var1} ${var2} ${var3}) `);
}
Array.from(boxes).forEach(e=>{
    e.style.backgroundColor = getRandomColor();
    e.style.color = getRandomColor();
})
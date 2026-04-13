//to calculate the factorial of a number using for loop

let n = 5;
function factorial(n) {
    if( n === 0 || n === 1){
        return 1;
    }
    return n* factorial(n-1);
}
console.log(factorial(n));


//factorial using REDUCE method
function factorial2(num){
    if (num === 0 || num === 1) return 1;
    let arr = Array.from({length: num}, (_,i) => i+1); //convert into array (1 to n)
    let result = arr.reduce((a,b) => a*b );
    console.log(result)
}
factorial2(5)
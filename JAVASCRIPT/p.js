const prompt=require("prompt-sync")({ sigint:true});
var n=parseInt(prompt("enter the year:"));
function leapyear(n){
    if (n%400==0 && n%100!==0||n%4==0){
    console.log("its a leap year");
}
else{
    console.log("not a leap year");
}
}
leapyear(n);

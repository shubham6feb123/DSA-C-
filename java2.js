let add = (function(){
    let counter=0;
    console.log("self invoking function");
    return function(){console.log("function inside self invoking");
    counter++;
return counter;
}
})();

console.log(add())
// console.log(add())
// console.log(add())
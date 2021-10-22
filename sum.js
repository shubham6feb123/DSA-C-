const add = function sum(array){
   return array.reduce((a,b)=>a+b,0)
}
const jod = add;
console.log(jod([1,2,3,4]));
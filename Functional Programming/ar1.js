/* function ret10(){ //no params
  return 10;
}

console.log(ret10()); */

/* function retPassed(i){ //1 param
  return i;
}

console.log(retPassed(10));
console.log(retPassed(11));
 */

/* function isEven(i){
  if ((i%2) == 0) return true;
  else return false;
}

console.log(isEven(10));
console.log(isEven(11));
*/

//102, 100 => true
//102, 103 => false
//102, 102 => false
//101, 100 => false
//101, 101 => false

console.log(isEvenAndGreaterThanOffset(102, 100));

function isEvenAndGreaterThanOffset(i, offset) {
  return Boolean(isEven(i) && greaterThanOffset(i, offset));
}

function isEven(i) {
  return i % 2 === 0 ? 1 : 0;
}

function greaterThanOffset(i, j) {
  return i > j;
}

// console.log("1");


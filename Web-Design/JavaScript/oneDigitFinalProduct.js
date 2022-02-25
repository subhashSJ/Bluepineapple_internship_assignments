/* Q. Create a function that takes one, two or more numbers as 
   arguments and adds them together to get a new number. The 
   function then repeatedly multiplies the digits of the new number 
   by each other, yielding a new number, until the product is only 1
   digit long. Return the final product. 
*/

const getOneDigitFinalProduct = (...parameters) => {
  var sumResult = parameters.reduce((total, currentValue) => {
    return total + currentValue;
  });

  if(sumResult < 0){
    return "Total Sum is NEGATIVE."
  }

  while (sumResult > 9) {
    let str = sumResult.toString();
    sumResult = new Array(...str).reduce((total, currentValue) => {
      return Number(total) * Number(currentValue);
    });
  }

  return sumResult;
};

console.log(getOneDigitFinalProduct(2,3,8,10,4));

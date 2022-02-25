/* Q. In JavaScript ES6 an arrow function expression is a 
   syntactically compact alternative to a regular function 
   expression. Create a function that takes a string representing a 
   function and converts between an arrow function and a regular 
   function
   - If the input is a regular function, return an equivalent arrow 
     function.
   - If the input is an arrow function, return an equivalent regular
     function. 
*/
const isArrowFunc = (str) => {
  return str.search("=>");
};

const getMeRegularFunction = (str) => {
  let key = "function ";
  return (
    key +
    str.slice(0, str.search("=")) +
    str.slice(str.indexOf("("), str.search("=>")) +
    str.slice(str.search("=>") + 2)
  );
};

const getMeArrowFunction = (str) => {
  return (
    str.slice(str.search("function") + 8, str.indexOf("(")) +
    " = " +
    (str.slice(str.indexOf("("), str.indexOf(")")+1)) +
    " =>" +
    str.slice(str.search("{"))
  );
};

const toggleFunction = (str) => {
  if (isArrowFunc(str) !== -1) {
    return getMeRegularFunction(str);
  } else {
    return getMeArrowFunction(str);
  }
};

const str = "func = (x,y) =>{return('Hello there !')}";
// const str = "function func2(){return ('Hello there !')}";

console.log(
  "\nGiven function is a " +
    (isArrowFunc(str) === -1 ? "Regular" : "Arrow") +
    " function.\n"
);

console.log(
  (isArrowFunc(str) === -1 ? "Arrow" : "Regular") +
    " function: " +
    toggleFunction(str) +
    "\n"
);

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

const toggleFunction = (str) =>{
    console.log(str);
}

const str = "const func = ()=>{return }"
toggleFunction(str);
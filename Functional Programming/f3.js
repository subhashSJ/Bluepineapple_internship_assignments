// --------- BOILERPLATE -----------------------------------------------------
const _l = (msg) => console.log("Output ==> [" + msg + "]");
// --------- BOILERPLATE -----------------------------------------------------


//Function to return factorial of passed number - use recursion

//fact(n) == n * fact(n-1) iff n >= 0 (fact(0) => 1)

var cache = [];

//Another way of doing this would be recursion:
const fac2 = (n) => {

  //TODO cache it (memoize it for later use)
  if (n <= 0) return 1;
  else {
    //checking if cache['n'] exists
    //if it does reuse, else recompute
    if(cache[n] !== undefined)
      return cache[n];
    
    let fac = n * fac2(n - 1);

    //Memoizing computed factorials
    cache[n] = fac;

    return fac;
  }
}; // no var mutation at all…


_l('using recursion');

_l(fac2(5));

_l(fac2(6));

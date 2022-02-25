/* Q. Given an array, write a function to calculate it's depth. 
      Assume that a normal array has a depth of 1.
      example:
        depth([1, 2, 3, 4]) ➞ 1
        depth([1, [2, 3, 4]]) ➞ 2
        depth([1, [2, [3, 4]]]) ➞ 3
        depth([1, [2, [3, [4]]]]) ➞ 4 
*/

const depth = (arr) => {
  if (arr.length === 0) {
    return 0;
  }
  var depthOfEachElement = [];
  arr.forEach((element) => {
    let count = 1;
    if (Array.isArray(element)) {
      count += depth(element);
    }
    depthOfEachElement.push(count);
  });
  return Math.max(...depthOfEachElement);
};

console.log("Depth : ", depth([1, [2, [3, [4]]], [2, 3], [1, [2, [3, [4]]]]]));

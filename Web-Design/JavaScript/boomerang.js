/* Q. A boomerang is a V-shaped sequence that is either upright or 
  upside down. Specifically, a boomerang can be defined as: 
  sub-array of length 3, with the first and last digits being the 
  same and the middle digit being different.
    - [3, 7, 3], [1, -1, 1], [5, 6, 5]
  Create a function that returns the total number of boomerangs in 
  an array.
    input: [3, 7, 3, 2, 1, 5, 1, 2, 2, -2, 2]
    output: 3 boomerangs in this sequence:  [3, 7, 3], [1, 5, 1], [2, -2, 2] 
*/

const getAllBoomerangs = (data) => {
  if (data.length === 0) {
    return "INSUFFICIENT DATA";
  }
  var result = [];
  for (let index = 0; index < data.length; index++) {
    if (data[index] === data[index + 2] && data[index] !== data[index + 1]) {
      result.push(new Array(data[index], data[index + 1], data[index + 2]));
    }
  }
  return result;
};

const data = [3, 7, 3, 2, 1, 5, 1, 2, 2, -2, 2, -2];

const result = getAllBoomerangs(data);

if (typeof result === "string") {
  console.log(result);
} else {
  console.log(`${result.length} boomerangs in this sequence:`, ...result);
}

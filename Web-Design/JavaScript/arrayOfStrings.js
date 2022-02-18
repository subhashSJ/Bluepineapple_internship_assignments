/* Q. Create a function that takes an array of strings and returns 
  an array with only the strings that have numbers in them.
  If there are no strings containing numbers, return an empty array.
*/

const getStringsContaingNumber = (data) =>
  data.filter((str) => {
    for (const ch of str) {
      if (Number(ch)) {
        return str;
      }
    }
  });

const data = [
  "Subhash",
  "Jadhav",
  "Subhash12",
  "Dayanand",
  "N2aykude",
  "2017",
  "1.1Mayur",
];

console.log(getStringsContaingNumber(data));

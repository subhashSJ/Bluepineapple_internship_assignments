/* Q. Create a function which counts how many lone 1s appear in a 
   given number. Lone means the number doesn't appear twice or more 
   in a row.
   example: countLoneOnes(101) ➞ 2, countLoneOnes(1191) ➞ 1 
*/

const countLoneOnes = (num) => {
  var count = 0;
  var str = num.toString();

  for (let i = 0; i < str.length; i++) {
    if (i === 0 && str[i] == 1 && str[i + 1] != 1) {
      count++;
    }

    if (i !== 0 && str[i - 1] != 1 && str[i] == 1 && str[i + 1] != 1) {
      count++;
    }
  }

  return count;
};

console.log(`Lone Ones : ${countLoneOnes(110110101)}`);

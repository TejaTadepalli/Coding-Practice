const digitFour = arr =>
  /4/.test(arr) ? 'PRESENT' : 'NOT PRESENT';

//OR ELSE

const digitFour = (arr) =>
  arr.join("").indexOf('4') >= 0 ? "PRESENT" : "NOT PRESENT";

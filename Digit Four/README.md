# Problem
Create a function `digitFour` that takes an array of numbers and return "PRESENT" if the
**digit 4** is in the array (not the number). If not, then return `"NOT PRESENT!"`

**Examples:**
````
- digitFour([1,2,3,4,5,6,7]) -> "PRESENT"
  // 4 contains the the digit 4
  
- digitFour([6,12,73,126]) -> "NOT PRESENT"
  // None of the array items contains the the digit 4
  
- digitFour([6,12,74,137,93]) -> "PRESENT"
  // 74 contains the the digit 4
````

**Test Values to Pass:**
````
Test.(digitFour([0,2,6,4,9,3]),"PRESENT")
Test.(digitFour([33,68,500,5]),"NOT PRESENT")
Test.(digitFour([86,78,100,66]),"NOT PRESENT")
Test.(digitFour([46,55,77,32]),"PRESENT")
Test.(digitFour([35,7,9,34]),"PRESENT")
````

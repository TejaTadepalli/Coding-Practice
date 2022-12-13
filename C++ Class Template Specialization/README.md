# [C++ Class Template Specialization](https://www.hackerrank.com/challenges/cpp-class-template-specialization/problem?isFullScreen=true)

You are given a main function which reads the [enumeration](http://en.cppreference.com/w/cpp/language/enum) values for two different types as input, 
then prints out the corresponding enumeration names. Write a class template that can provide the names of the enumeration values for both types. 
If the enumeration value is not valid, then print `unknown`.


#### Input Format:
The first line contains *t*, the number of test cases.

Each of the *t* subsequent lines contains two space-separated integers. The first integer is a color value, *c*, and the second integer is a fruit value, *f*.


#### Constraints:
- *1 <= t <= 100*
- *-2 x 10<sup>9</sup> <= c <= 2 x 10<sup>9</sup>*
- *-2 x 10<sup>9</sup> <= f <= 2 x 10<sup>9</sup>*


#### Output Format:
The locked stub code in your editor prints *t* lines containing the color name and the fruit name corresponding to the input enumeration index.


#### Sample Input:
````
2
1 0 
3 3
````


#### Sample Output:
````
green apple
unknown unknown
````


#### Explanation:
Since *t=2*, there are two lines of output.

1. The two input index values, *0* and *1*, correspond to green in the color enumeration and apple in the fruit enumeration. Thus, we print green apple.
2. The two input values, *3* and *3*, are outside of the range of our enums. Thus, we print unknown unknown.

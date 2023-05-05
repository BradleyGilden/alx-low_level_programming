# Bitwise Operators

**A set of operators that compare or manipulate data at the bit-level representation**

## 3 Classes of Bitwise Operators

* Unary - used as a prefix to a bit vector
  * `~` one's [compliment](#bitwise-compliment-operator) / invert

* Binary operators working on 2 vectors of bits.
  * `&` [and](#bitwise-and)
  * `|` [or](#bitwise-or)
  * `^` [exclusive or](#bitwise-exclusive-or)

* Binary shift operators whose format is: `bit vector <operator\> integer`
  * `<<` [shift left](#bitwise-shift-left)
  * `>>` [shift right](#bitwise-shift-right)

## Bitwise Compliment Operator

The compliment operator will flip each bit to the opposite value 

* 0's become 1's and 1's become 0's
* E.g: ~[1, 0, 1, 0] = [0, 1, 0, 1]

Truth Table:

|a|~a|
|-|-|
| 0 | 1 |
| 1 | 0 |

## Bitwise AND (&)

bitwise operator takes two bit vectors <i>a<sub>v</sub></i> & <i>b<sub>v</sub></i> and produces <i>c<sub>v</sub></i>

* Each bit of <i>a<sub>v</sub></i> and <i>b<sub>v</sub></i> are compared at <i>i</i>
* When both <i>ai<sub>v</sub></i> and <i>bi<sub>v</sub></i> are 1, then <i>ci<sub>v</sub></i> is 1.
* otherwise <i>ci<sub>v</sub></i> is 0.

Truth Table:

|a|b|a & b|
|:-:|:-:|:---:|
|0|0|0|
|0|1|0|
|1|0|0|
|1|1|1|

## Bitwise OR ( | )

bitwise operator takes two bit vectors <i>a<sub>v</sub></i> | <i>b<sub>v</sub></i> and produces <i>c<sub>v</sub></i>

* Each bit of <i>a<sub>v</sub></i> and <i>b<sub>v</sub></i> are compared at <i>i</i>
* When either <i>ai<sub>v</sub></i> **or** <i>bi<sub>v</sub></i> **or** both are 1, then <i>ci<sub>v</sub></i> is 1.
* otherwise <i>ci<sub>v</sub></i> is 0.
* can be seen as the sum of 2 bit vectors if there is no carry

Truth Table:

|a|b|a \| b|
|:-:|:-:|:---:|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|1|

## Bitwise EXCLUSIVE OR ( ^ )

bitwise operator takes two bit vectors <i>a<sub>v</sub></i> ^ <i>b<sub>v</sub></i> and produces <i>c<sub>v</sub></i>

* Each bit of <i>a<sub>v</sub></i> and <i>b<sub>v</sub></i> are compared at <i>i</i>
* When either <i>ai<sub>v</sub></i> and <i>bi<sub>v</sub></i> are not equal, <i>ci<sub>v</sub></i> is 1.
* otherwise <i>ci<sub>v</sub></i> is 0.

Truth Table:

|a|b|a ^ b|
|:-:|:-:|:---:|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

## Bitwise Shift Left <<

Shifts the 1 bits left in bit vector by increments and truncates the rest with 0's

* can be also seen as value * 2 in C.
  ```C
  int main()
  {
  	//           b = 9 (00001001)
  	unsigned char b = 9;

	// The result is 18 (00010010)
    printf("b<<1 = %d\n", b << 1);
  }
  ```

## Bitwise Shift Right >>

Shifts the 1 bits right in bit vector by increments and truncates the rest with 0's

* can be also seen as value / 2 in C.
  ```C
  int main()
  {
  	//           b = 9 (00001001)
  	unsigned char b = 9;

	// The result is 4 (00000100)
    printf("b>>1 = %d\n", b >> 1);
  }
  ```

## Sources
* [Bitwise Operators in C](https://www.youtube.com/watch?v=3eJkWkHcPc8&list=PLWaFiMTuntW897OnkKSe_yOKhvp1ZlGsw&index=6&t=631s)

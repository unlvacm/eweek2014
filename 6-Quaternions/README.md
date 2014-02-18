# Problem 6: Quaternion Rotations

You're a fresh new game designer working at Bungie, developing their next big title, Destiny. To ensure the game's demanding graphics can be played efficiently on a PC that doesn't cost more than your car, you've been given the task of optimizing the game's renderer (a program that draws the graphics on the screen) to improve performance. 

You noticed in their code that they are using rotational matrices to compute rotations of objects in 3 dimensions, which make heavy use of expensive trigonometric functions. Given that the game should optimally run at 60 frames a second, that means it could be computing hundreds of thousands of these trig functions every second, which is very inefficient. 

To resolve this, you have decided to instead employ Quaternions for rotations. Recall a complex number is any number that includes i, such that i\*i = -1. A quaternion is a similar, more abstract form, which in addition to i, also defines j and k, such that j\*j = -1, and k\*k = -1. Like complex numbers, quaternions are written with each component: 1 + 5i + 3j - 6k.

Given an angle t <u>in radians</u> about an axis w, the relation between a quaternion, and the angle of rotation about an axis is as follows:

Q = cos(t / 2) + sin(t / 2)i + sin(t / 2)j + sin(t / 2)k

Where i, j, and k are components of w, and w is a unit vector, meaning its components can only be a value of 0 or 1.

The rotations are computed using the quaternion with the following formula:

Rotated Quaternion = H(H(Q, P), Q')

Where Q is a quaternion converted from an angle about an axis.

And P is the position vector, given in 4 components. <b>The first component of this vector is always 0.</b> The next three are the x, y, and z positions respectively. 

And Q' is the <i>transposition</i> of Q, such that if Q = w + i + j + k, Q' = w - i - j - k.

And H is a function that computes the <i>Hamilton Product</i> of a vector and a quaternion. The Hamilton product is essentially the distributed property applied to quaternions, and defined as follows:

Let q1 = a + bi + cj + dk, and q2 = w + xi + yj + zk, then the hamilton product is:

```
   a*w - b*x - c*y - d*z
+ (a*x + b*w + c*z - d*y)i
+ (a*y - b*z + c*w + d*x)j
+ (a*z + b*y - c*x + d*w)k
```

The i, j, and k components of the new quaternion are the new position vector. The 'real' number portion of the quaternion, that does not have i, j or k is not important and may be discarded.  


### Input and Output
Your input will consist of a series of floating point numbers. The first number is the number of vectors to compute. The next 3 lines will be your input for that vector. The first is the position, given as floating points, the second is the angle <u>in degrees</u>, and the third is the unit vector, which will always be 3 numbers either a 0 or a 1. These indicate the axis at which the number will rotate. 

The output will consist of the new computed positions. You should begin each entry with 'vector' and then the number starting from 0. Each line below will be the x, y, and z location respectively, beginning with 'x:', 'y:' and 'z:' for each line, finally a newline to separate. Please note that different languages and implementations may have varying floating point accuracy. As such, your numbers must be accurate within a range of 5 significant figures.  

You <u>must</u> make use of quaternions and the equations above to solve this problem. If you are seen using a different implementation, your program will be rejected. 

#### Sample Input
```
3
3 4 5
23.6
1 0 0
1.3 7.2 4.344
46.3
1 0 1
1 0 0
90
0 1 0
```
#### Sample Output
```
vector 0
x: 3.0
y: 1.66370575546
z: 6.18320977804

vector 1
x: -2.76348307707
y: 1.66081804748
z: 9.27981291301

vector 2
x: 0.0
y: 0.0
z: -1.0
```
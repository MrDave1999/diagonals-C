
# diagonals
I had nothing to do and it occurred to me to create some functions to print any diagonal of a two-dimensional array. 

You can compile and link the test program just by placing the following command: 
```c
make all
```

## Explanation 

This simple API has 8 functions to print any diagonal of a 2D array:

- `void pd_right_asc(int** array, int i);`

Print the diagonal on direcction toward to the right on upward order. 

The second parameter receives the number of diagonal that you want to print. The value of `i` must be in the range `1` to `N`. 

For example:
```c
pd_right_asc(m, 3);
```
The function shows the third diagonal of a 6x6 matrix: 

![image](https://user-images.githubusercontent.com/43916038/112705452-ca810f80-8e6c-11eb-80cd-b67e9346d367.png)

As a result it should return:
```c
69,23,65
```

- `void pd_right_desc(int** array, int i);`

Print the diagonal on direcction toward to the right on falling order. 

The second parameter receives the number of diagonal that you want to print. The value of `i` must be in the range `1` to `N`. 

For example:
```c
pd_right_desc(m, 4);
```
The function shows the fourth diagonal of a 6x6 matrix: 

![image](https://user-images.githubusercontent.com/43916038/112705560-732f6f00-8e6d-11eb-9f13-1df160b0d456.png)

As a result it should return:
```c
70,13,89,57
```

- `void pd_right_below_asc(int** array, int i);`

Print the diagonal (on direcction toward to the right) the one below of the main diagonal on upward order.

The second parameter receives the number of diagonal that you want to print. The value of `i` must be in the range `1` to `N - 1`. 

For example:
```c
pd_right_below_asc(m, 3);
```
This function shows the third diagonal that is after the main diagonal:

![image](https://user-images.githubusercontent.com/43916038/112705909-d40b7700-8e6e-11eb-88bb-dfae77b87b13.png)

As a result it should return:
```c
81,62,19
```

- `void pd_right_below_desc(int** array, int i);`

Print the diagonal (on direcction toward to the right) the one below of the main diagonal on falling order.

The second parameter receives the number of diagonal that you want to print. The value of `i` must be in the range `1` to `N - 1`. 

For example:
```c
pd_right_below_desc(m, 2);
```
This function shows the second diagonal that is after the main diagonal but does so in descending order: 

![image](https://user-images.githubusercontent.com/43916038/112705999-5300af80-8e6f-11eb-913e-40bdeee9bf89.png)

As a result it should return:
```c
55,95,67,77
```

- `void pd_left_asc(int** array, int i);`

Print the diagonal on direcction toward to the left on upward order.

The second parameter receives the number of diagonal that you want to print. The value of `i` must be in the range `0` to `N - 1`. 

For example:
```c
pd_left_asc(m, 3);
```
This function shows the third diagonal in the opposite direction:

![image](https://user-images.githubusercontent.com/43916038/112706270-35cce080-8e71-11eb-8a87-6203306ff66a.png)

As a result it should return:
```c
79,91,17
```

- `void pd_left_desc(int** array, int i);`

Print the diagonal on direcction toward to the left on falling order.

The second parameter receives the number of diagonal that you want to print. The value of `i` must be in the range `0` to `N - 1`. 

For example:
```c
pd_left_desc(m, 1);
```
This function shows the first diagonal that is before the main diagonal:

![image](https://user-images.githubusercontent.com/43916038/112706375-bc81bd80-8e71-11eb-8733-bd8e5969106a.png)

As a result it should return:
```c
17,46,51,86,45
```

- `void pd_left_below_asc(int** array, int i);`

Print the diagonal (on direcction toward to the left) the one below of the main diagonal on upward order.

The second parameter receives the number of diagonal that you want to print. The value of `i` must be in the range `1` to `N - 1`. 

For example:
```c
pd_left_below_asc(m, 1);
```
The function shows the first diagonal that is after the main diagonal in the opposite direction:

![image](https://user-images.githubusercontent.com/43916038/112706648-a674fc80-8e73-11eb-9ec1-c63910d7f5df.png)

As a result it should return:
```c
26,21,36,72,84
```

- `void pd_left_below_desc(int** array, int i);`

Print the diagonal (on direcction toward to the left) the one below of the main diagonal on falling order.

The second parameter receives the number of diagonal that you want to print. The value of `i` must be in the range `1` to `N - 1`. 

For example:
```c
pd_left_below_desc(m, 2);
```
The function shows the second diagonal that is after the main diagonal in the opposite direction:

![image](https://user-images.githubusercontent.com/43916038/112706738-53e81000-8e74-11eb-8022-6a1d67f2bf34.png)

As a result it should return:
```c
90,14,51,27
```

Out of boredom, I made a function to print the curve of the array: 
```c
print_curves(m);
```
![image](https://user-images.githubusercontent.com/43916038/112707424-4ed98f80-8e79-11eb-8aee-78342a3df5b1.png)

Resulting:
```c
41,83,28,79,37,46,84,13,46,89,25,37,99,57,60,78,63,15,12,80,66,21,23,12,46,27,99,88,13,34,12,80,65,88,57,84
```
# Vector-Operation
Write a function that takes a vector of integers as input. The output is the same vector (i.e. the function's return type should be void) where all duplicates are removed.

Example: before: v=[1, 2, 2, 4], after : v=[1, 2, 4]

Solve this for the following cases:
  You cannot use std::set
  You can use std::set
  Write a function that takes a vector of integers as input. The output is the same vector
but in reversed order:
  Example: before: [1, 2, 3] after: [3, 2, 1]

Write a function that takes a vector of integers as input. The output should be the same vector where all ​odd numbers are removed.
  Example: before: [1, 2, 3], after: [2]

Write a function that inputs two vectors of integers, and returns a new vector formed by
concatenating the two input vectors.
  Example: input: ([1, 2, 3], [3, 5, 6]): output: [1, 2, 3, 3, 5, 6]

Write a function that takes two vectors v1 and v2, and returns a new vector that is the union​ of the values in v1 and v2.
  Example: input: (v1=[1, 2, 3], v2=[3, 4, 5]), output = [3]

Run with
```
bazel run src/main:main
```

Test with
```
bazel test tests:tests
```

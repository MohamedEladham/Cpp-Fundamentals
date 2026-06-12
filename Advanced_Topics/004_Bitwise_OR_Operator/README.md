# Bitwise OR Operator (|)

## Overview

The Bitwise OR operator (`|`) compares each bit of two numbers.

It returns `1` if at least one of the corresponding bits is `1`.

## Truth Table

| Bit A | Bit B | A | B |
| ----- | ----- | ----- |
| 0     | 0     | 0     |
| 0     | 1     | 1     |
| 1     | 0     | 1     |
| 1     | 1     | 1     |

---

## Example 1

```cpp
cout << (8 | 7) << endl;
```

Binary Representation:

```text
  8 = 00001000
  7 = 00000111
----------------
OR  = 00001111
```

Result:

```text
15
```

---

## Example 2

```cpp
cout << (12 | 10) << endl;
```

Binary Representation:

```text
 12 = 00001100
 10 = 00001010
----------------
OR  = 00001110
```

Result:

```text
14
```

---

## Example 3

```cpp
cout << (5 | 3) << endl;
```

Binary Representation:

```text
  5 = 00000101
  3 = 00000011
----------------
OR  = 00000111
```

Result:

```text
7
```

---

## Example 4

```cpp
cout << (15 | 7) << endl;
```

Binary Representation:

```text
 15 = 00001111
  7 = 00000111
----------------
OR  = 00001111
```

Result:

```text
15
```

---

## How Bitwise OR Works

The operator compares each bit position independently:

```text
1 | 1 = 1
1 | 0 = 1
0 | 1 = 1
0 | 0 = 0
```

If either bit is `1`, the result is `1`.

---

## Common Uses

* Setting specific bits.
* Working with flags.
* Permission systems.
* Embedded systems.
* Low-level programming.

---

## Concepts Covered

* Bitwise OR Operator (|)
* Binary Representation
* Binary Comparison
* Truth Table
* Bit Manipulation

---

## Key Takeaway

The Bitwise OR operator (`|`) returns a new value whose bits are `1` whenever at least one of the corresponding bits in the input numbers is `1`.

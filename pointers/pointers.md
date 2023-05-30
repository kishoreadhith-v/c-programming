# Pointers

consider...

```c
int main(){
    int x = 15;
    int *ptr = &x;
    printf("%d", x);
    printf("%p", ptr);
    printf("%p", *ptr);
}
```

In the above example
- `ptr` is a pointer which points to the address of the variable `x`
- the `&` operator is used to assign the address of `x` to `ptr`
- the `*` operator gives the value of `x` (reverse of `&`)
- the datatype of the pointer should be same as tha tof the variable it is pointing to.
- 

```c
printf("\nValue: %f : %f\n", f, *ptrf);
printf("Address: %p : %p\n", &f, ptrf);
```

The above snippet shows the different ways to print the value and address of a variable.

---
## Pointer to an array

```c
int a1[] = {1, 2, 3, 4, 5}, a2 = 10;
int *ptr1 = a1, *ptr2 = &a2; 
```

This snippet shows how to point to an array and how it is different from pointing to just a variable

#### Note:
- When we use just the name of the array, it points to the first element of it. (the `&` is not to be prefixed to the name of the array)

---

## Pointer arithmetic

Incrementing the pointer of an element of an array, gives the next element
# Dynamic Memory Allocation

## malloc()

It is a function used to allocate a specified amount of memory. This function returns a address of the allocated memory which can be caught using a pointer. It takes the number of bytes as an arguement

Examples:

```c
int *p;
    p = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p+i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(p+i));
    }
```

Using array subscript:

```c
int *p;
    p = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", p[i]);
    }
```
## free()
free is used to deallocate the memory allocated. It takes the pointer as the arguement.

## realloc()

This function is used to reallocate memory to a variable that is already allocated. It take the the pointer to the existing memeory and the number of bytes to be reallocated as arguements.

Demonstration:
```c
int *p = (int *)calloc(5,sizeof(int));
printf("Original block of memory: %p\n", p);
int *s = realloc(p, 10*sizeof(int));
printf("larger block of memory: %p\n", s);
int *l = realloc(p, 2*sizeof(int));
printf("smaller block of memory: %p\n", l);
printf("---\n");
printf("original == larger: %d\n", p == s);
printf("original == smaller: %d\n", p == l);
```

Output:

```
Original block of memory: 0x5638f57152a0
larger block of memory: 0x5638f57156d0
smaller block of memory: 0x5638f57152a0
---
original == larger: 0
original == smaller: 1
```

## calloc()
This function allocates contigous memory locations.



function that takes a sentence as input, dynamically allocates memory and count the number of words in it.


# Recursion

## Terminologies

- `Stack`: A last-in-first-out datatype. The execution context/ call stack is based on this datatype.
- `Stack`: A last-in-first-out datatype. The execution context/ call stack is based on this datatype.
- 

## Call stack

## Recursion

Two main parts of a recursive function:
- Base case: The final case or the case at which the recursion has to be stopped.
- Recursive case: Any case at which the recursion is continued ie. the same function is called. ANy case which isn't the base case is probably a recursive case.
Every successive recursive case must have its problem size reduced.
Every recursive case must have the same logic.

Example: recursive function to find factorial
```
int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
```

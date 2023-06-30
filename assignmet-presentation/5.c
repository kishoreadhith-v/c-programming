// 5.Implement a recursive function to solve the Tower of Hanoi problem with n disks, given three
// towers.

#include <stdio.h>

void hanoi(int n, char source, char destination, char auxilliary){
    if (n == 1)
    {
        printf("Move disc 1 from peg %c to peg %c\n", source, destination);
        return;
    }
    
    hanoi(n -1, source, auxilliary, destination);
    printf("Move disc %d from peg %c to peg %c\n", n, source, destination);
    hanoi(n -1, auxilliary, destination, source);
}

int main(){
    hanoi(4, 'a', 'b', 'c');
}
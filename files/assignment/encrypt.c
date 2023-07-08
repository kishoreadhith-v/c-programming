#include <stdio.h>
#include <stdlib.h>


void encrypt(char * input_path, char * output_path, int key){
    FILE * fr = fopen(input_path, "r");
    FILE * fw = fopen(output_path, "w");
    char c;
    while ((c = fgetc(fr)) != EOF)
    {
        fputc(c ^ key, fw);
    }
    fclose(fr);    
    fclose(fw);    
}

int main(){
    char * ip = "encrypt_test.txt";
    char * eop = "encrypt_output.txt";
    char * dop = "decrypt_output.txt";
    encrypt(ip, eop, 2);
    printf("done\n");
    encrypt(eop, dop, 2);
    printf("done\n");
}
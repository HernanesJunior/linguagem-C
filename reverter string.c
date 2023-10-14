#include <stdio.h>
#include <string.h>


int main() {
    char string1[100];
    char string2[100];


    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);


    string1[strcspn(string1, "\n")] = '\0';


    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);


    string2[strcspn(string2, "\n")] = '\0';


    int comparacao = strcmp(string1, string2);


    if (comparacao == 0) 
    {
        
    }

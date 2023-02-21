#include <stdio.h>
#include <string.h>
int typeSize(int x){
    char c;
    int i;
    short s;
    long l;
    float f;
    double d;
    int noOfTypes;
    char type[10];
    printf("Enter the number of each data type followed by the name of the data type.\n");    
    scanf("%d", &noOfTypes);
    scanf("%s", type);
    if (strcmp(type, "char") == 0){
        int noOfChar = sizeof(c);
        int whole = noOfChar * noOfTypes;
        return whole;
    }
    if (strcmp(type, "int") == 0){
        int noOfInt = sizeof(i);
        int whole = noOfInt * noOfTypes;
        return whole;
    }
    if (strcmp(type, "short") == 0){
        int noOfShort = sizeof(s);
        int whole = noOfShort * noOfTypes;
        return whole;
    }
    if (strcmp(type, "long") == 0){
        int noOfLong = sizeof(l);
        int whole = noOfLong * noOfTypes;
        return whole;
    }
    if (strcmp(type, "float") == 0){
        int noOfFloat = sizeof(f);
        int whole = noOfFloat * noOfTypes;
        return whole;
    }
    if (strcmp(type, "double") == 0){
        int noOfDouble = sizeof(d);
        int whole = noOfDouble * noOfTypes;
        return whole;
    }
    else{
        printf("Not a valid data type within C.");
        return 0;
    }
}

int main(){
    int noOfInputs=0, sum=0, newVal=0;
    printf("Enter the total number of data types.\n");
    scanf("%d", &noOfInputs);
    for(int i = 0; i < noOfInputs; i++){
        newVal = typeSize(noOfInputs);
        sum = sum + newVal;
        if (newVal == 0){
            sum = sum + 0;
        }
    }
    if (sum != 0){
        printf("%d bytes", sum);
    }
}

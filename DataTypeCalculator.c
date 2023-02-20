#include <stdio.h>
#include <string.h>
int typeSize(int x){
    char c;
    int i;
    double d;
    int noOfTypes;
    char type;
    scanf("%d", &noOfTypes);
    scanf(" %c", &type);
    if (type == 'c'){
        int noOfChar = sizeof(c);
        int whole = noOfChar * noOfTypes;
        return whole;
    }
    if (type == 'i'){
        int noOfInt = sizeof(i);
        int whole = noOfInt * noOfTypes;
        return whole;
    }
    if (type == 'd'){
        int noOfDouble = sizeof(d);
        int whole = noOfDouble * noOfTypes;
        return whole;
    }
    else{
        printf("invalid tracking code type");
    }
}

int main(){
    int noOfInputs=0, sum=0, newVal=0;
    scanf("%d", &noOfInputs);
    for(int i = 0; i < noOfInputs; i++){
        newVal = typeSize(noOfInputs);
        sum = sum + newVal;
        if (newVal == 0){
            return;
        }
    }
    if (sum != 0){
        printf("%d bytes", sum);
    }
}

//maythu456@gmail.com (Third Exam)
//This program is Sorting array data and checking for vowel in character array

#include<stdio.h>
#define MAX_LIMIT 50

void mySort(int *ptr, int length);
void checkVowel(char *,int);

int main(){

printf("Welcome My Program!!!!\n");
printf("This is 2 Section: one for Checking Vowel and one for Sorting\n\n \n");

printf("This Section is Checking for number of Vowel!! \n");

    char str[MAX_LIMIT];
    printf("\n Enter Your String: ");
    fgets(str, MAX_LIMIT, stdin);
    printf("   Your String is:  ");
    printf("%s", str);

    checkVowel(str,MAX_LIMIT);

    printf("This Section is Sorting Array of Data\n");
        int size;

        printf("\nEnter Size for array:");
        scanf("%d",&size);

        int myArray[size];

            for(int i=0;i<size;i++){
                printf("Enter number for index[%d]:" ,i+1);
                scanf("%d",&myArray[i]);

            }
            printf("\nBefore Sorting :");
            for(int j=0; j<size;j++){
                printf("%d,  ",myArray[j]);

            }

            mySort(myArray,size);

            printf("\n\n\nAfter Sorting   :");
            for(int j=0; j<size;j++){
                printf("%d,  ",myArray[j]);

            }

return 0;
}

void mySort(int *ptr, int length){
int j,k;

for(j=0;j<length-1;j++){

    for(k=j+1;k<length;k++){

        if(ptr[j]>ptr[k]){

            int temp = ptr[j];
            ptr[j]=ptr[k];
            ptr[k] = temp;
        }
    }
}

}

void checkVowel(char *Vptr,int len){
int k,count=0;

for(k=0;k<len;k++){
    switch(Vptr[k]){
    case 'A' :
    case 'a': count++; printf("\n Index Number of %d",k); printf(" is %c",Vptr[k]); break;

   case 'E':
   case 'e':count++;printf("\n Index Number of %d",k); printf(" is %c",Vptr[k]);break;

  case 'I':
  case 'i':count++;printf("\n Index Number of %d",k); printf(" is %c",Vptr[k]);break;

   case 'O' :
   case 'o':count++;printf("\n Index Number of %d",k); printf(" is %c",Vptr[k]);break;


   case 'U':
    case 'u': count++;printf("\n Index Number of %d",k); printf(" is %c",Vptr[k]);break;
    }

}
printf("\n Total Number of vowel : %d\n \n \n ",count);
}


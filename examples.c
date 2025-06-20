#include<stdio.h>
void namaste();
void banjor();
int main(){
    printf("enter i if u are indai & enter f u are french:");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
printf("namaste\n") ;
printf("namste");
} else if(ch=='f'){
    printf("banjor");
} else{
        printf("correct ");
}
    
    
    return 0;

}
void namaste(){
printf("namste\n");
}
void  banjor(){
    printf("banjor\n");
}


#include<conio.h>
#include <stdio.h>

int main() {
    // Write C code here
    char a[100]; int n;                         //Mudule-3
    printf("Enter the number of elements in the list: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");
    
    for(int i=0;i<n;i++){
        int n=a[i];
        int rem,rev=0;
        while(n>0){
             rem=n%10;            //Mudule-1
            rev=rev*10+rem;
            n/=10;
        }
        int num;                    //Mudule-2
        while(rev>0){
        num=rev%10;
            if(num==1){
                printf("one ");
            }
            else if(num==2){
                printf("two ");
            }
            else if(num==3){
                printf("three ");
            }
            else if(num==4){
                printf("four ");
            }
            else if(num==5){
                printf("five ");
            }
            else if(num==6){
                printf("six ");
            }
            else if(num==7){
                printf("seven ");
            }
            else if(num==8){
                printf("eight ");
            }
            else if(num==9){
                printf("nine ");
            }
            else if(num==0){
                printf("zero ");
            }
            rev/=10;
        } 
        printf("\n");
    }
    
    return 0;
}
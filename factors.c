// #include<stdio.h>
// int  num(int n,int rev){
   
//     if(n<=0){
//         return rev;
//     }
    
//     return num(n/10,rev*10+(n%10));
    
// }
// int main(){
//    int ans= num(123,0);
//     printf("%d",ans);
// }
#include<stdio.h>
void num(int n){
    if(n<0){
        return;
    }
    int sum=0;
     num(n-1);
    sum=sum+n;
    int b;
  int a=b;
    b=c;

    printf("%d",sum);
        
}
int main(){
    num(4);

    return 0;
}




#include <stdio.h>
int main() {
    int s1,s2,s3,long_s,a,b;
    scanf("%d %d %d",&s1,&s2,&s3);
if(s1>s2 && s1>s3){
    long_s=s1;
    a=s2;
    b=s3;
}
else if(s1<s2 && s2>s3){
    long_s=s2;
    a=s1;
    b=s3;

}
else{
    long_s=s3;
    a=s1;
    b=s2;
}

if(a+b>long_s){
    printf("Valid");
}
else{
    printf("Invalid");
}
    return 0;
}
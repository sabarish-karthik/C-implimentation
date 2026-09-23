#include <stdio.h> 
int main(){
       int l=7,o=5;
   for (int j=1,s=1; j<=4;j++){
   	for(int n=1;n<=j;n++){
   		s++;	
   		printf("%d",n);}
   	if (o > 0){printf("%*s",o,"");}
   	o=o-2;
   	if(j<4){
   	for(int a=j;a>=1;a--){
	printf("%d",a);}}
	else{for(int a=3;a>=1;a--){
	printf("%d",a);}}
	printf("\n");
} //upperblock;here on everything ulta
	o=1; 
	for (int j = 3; j>= 1; j--) {
         for (int n = 1; n <= j; n++) {printf("%d", n);}
	if(o>0){printf("%*s",o,"");}
        o = o + 2;
        for (int a = j; a >= 1; a--) {
            printf("%d", a);
        }
        printf("\n");}
}	


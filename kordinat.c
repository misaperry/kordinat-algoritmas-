#include <stdio.h>
#include <stdlib.h>


int main(){
float Ax,Bx,Cx,Px,Ay,By,Cy,Py,bx,by,cx,cy,d,WA,WB,WC,x,y;


printf("Ilk Noktanin X degerini giriniz:");
scanf("%f",&Ax);

printf("Ilk Noktanin Y degerini giriniz:");
scanf("%f",&Ay);

printf("Ikinci Noktanin X degerini giriniz:");
scanf("%f",&Bx);

printf("Ikinci Noktanin Y degerini giriniz:");
scanf("%f",&By);

printf("Ucuncunun X degerini giriniz:");
scanf("%f",&Cx);

printf("Ucuncunun Y degerini giriniz:");
scanf("%f",&Cy);

printf("\n\n\n");

printf("Noktanin X degerini giriniz:");
scanf("%f",&Px);

printf("Noktanin Y degerini giriniz:");
scanf("%f",&Py);


bx=Bx-Ax;
by=By-Ay;
cx=Cx-Ax;
cy=Cy-Ay;
x=Px-Ax;
y=Py-Ay;

d=(bx*cy)-(cx*by);
WA=(x*(by-cy)+y*(cx-bx)+(bx*cy)-(cx*by))/d;
WB=((x*cy)-(y*cx))/d;
WC=((y*bx)-(x*by))/d;

printf("WA:%f\n",WA);
printf("WB:%f\n",WB);
printf("WC:%f\n",WC);


  if((WA>0 && WA<1)&&(WB>0 && WB<1)&&(WC>0 && WC<1)){
    printf("NOKTA UCGENIN ICINDE");
}
else{
    printf("NOKTA UCGENIN DISINDA");
}
return 0;
}

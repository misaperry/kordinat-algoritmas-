#include <stdio.h>
#include <stdlib.h>
    int A_noktasinin_koordinati[10][10];        int sayac_koordinat=0;      float WA,WB,WC,d ;                  float sonucWB=0;
    int B_noktasinin_koordinati[10][10];        int x1,x2,x3,y3,y1,y2;      float cx,cy,bx,by;                  float sonucWC=0;
    int C_noktasinin_koordinati[10][10];        int sayac_koordinat3=0;     float Ax,Ay,Bx,By,Cx,Cy,Px,Py;      float sonucd=0;
    int P_noktasinin_koordinati[10][10];        int sayac_koordinat2=0;     float A,B,C,P[10];                  float sonucy=0;
    float sonucx =0;                            int x,y;                    float sonucWA=0;                    float sonucbx=0;
    float sonucby =0;
    float sonuccx =0;
    float sonuccy =0;




 int main()
{

       sayac_koordinat=sayac_koordinat+1;

     printf("ucgenin koordinatlarini giriniz:\n");


     printf("A noktasinin x koordinatini giriniz:\n");
     scanf("%f",&Ax);

     printf("A noktasinin y koordinatini giriniz:\n");
     scanf("%f",&Ay);


     printf("B noktasinin x koordinatini giriniz:\n");
     scanf("%f",&Bx);

     printf("B noktasinin y koordinatini giriniz:\n");
     scanf("%f",&By);


     printf("C noktasinin x koordinatlarini giriniz:\n");
     scanf("%f",&Cx);

     printf("C noktasinin y koordinatlarini giriniz:\n");
     scanf("%f",&Cy);


          sonucbx = Bx-Ax;
          sonucby = By-Ay;
          sonuccx = Cx-Ax;
          sonuccy = Cy-Ay;
          sonucx = Px-Ax;
          sonucy = Py-Ay;



      printf("\n sonucbx=%.2f\n",sonucbx);

      printf("\n sonucby=%.2f\n",sonucby);

      printf("\n sonuccx=%.2f\n",sonuccx);

      printf("\n sonuccy=%.2f\n",sonuccy);

      printf("\n sonucx=%.2f\n",sonucx);

      printf("\n sonucy=%.2f\n",sonucy);




       sonucWA=(sonucx*(sonucby-sonuccy)+sonucy*(sonuccx-sonucbx)+sonucbx*sonuccy-sonuccx*sonucby)/d;

       sonucWB=(sonucx*sonucbx-y*sonuccx)/d;

       sonucWC=(sonucy*sonucbx-sonucx*sonucby)/d;

       sonucd=(sonucbx*sonuccy)-(sonuccx*sonucby);

       printf("\n sonucWA=%.2f\n",sonucWA);

       printf("\n sonucWB=%.2f\n",sonucWB);

       printf("\n sonucWC=%.2f\n",sonucWC);

       printf("\n sonucd=%.2f\n",sonucd);




       if((sonucWA>0 && sonucWA<1) && (sonucWB>0 && sonucWB<1) && (sonucWC>0 && sonucWC<1) && (sonucd>0 && 
                                                                                               sonucd<1)) {


               printf("Nokta ucgenin icindedir");

       }

       else  {

          printf("Nokta ucgenin Disindadir:");


     }



    return 0;
}
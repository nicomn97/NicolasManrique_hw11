#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

float dv(float G, float M, float x, float h, float v0);
float dx(float v, float h, float x0);
float dvlf(float G, float M, float x, float h, float v0);
float dxlf(float v, float h, float x0);

int main () {
    float G = 10;
    float M = 1000;
    float h;
    cout<<"Ingresar paso de tiempo (h en segundos)";
    cin>>h;
    float m;
    cout<<"Ingresar masa m (en kg)";
    cin>>m;
    float x0;
    cout<<"Ingresar posicion inicial (en metros)";
    cin>>x0;
    float v0;
    cout<<"Ingresar velocidad inicial (en m/s)";
    cin>>v0;
    float x00=x0;
    float x1=dx();
    I11=dI(dt,St1,It1,b1,g1);

    int i = 0;
    while(x00>0.9*x1){
        float t=h*i;
        cout << x0<<" "<<v0<<" "<<t;
        float Stprov1 = St1;
        float Itprov1 = It1;
        St1=dSlf(dt,St1,It1,b1,S11);
        S11=Stprov1;
        It1=dIlf(dt,Stprov1,It1,b1,g1,I11);
        I11=Itprov1;
        float Stprov2 = St2;
        float Itprov2 = It2;
        St2=dSlf(dt,St2,It2,b2,S22);
        S22=Stprov2;
        It2=dIlf(dt,Stprov2,It2,b2,g2,I22);
        I22=Itprov2;
        i+=1;
   }
   return 0;
}

float dv(float G, float M, float x, float h, float v0){

    float res;
    res = -(G*M*h/(x*x))+v0;
    return res;

}

float dx(float v, float h, float x0){

    float res;
    res = v*h+x0;
    return res;

}

float dvlf(float G, float M, float x, float h, float v0){

    float res;
    res = -(G*M*2.0*h/(x*x))+v0;
    return res;

}

float dxlf(float v, float h, float x0){

    float res;
    res = v*2.0*h+x0;
    return res;

}

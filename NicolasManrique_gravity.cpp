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
    //Ingresar paso de tiempo (h en segundos)
    h=0.001;
    float x0;
    //Ingresar posicion inicial (en metros)
    x0=100;
    float v0;
    //Ingresar velocidad inicial (en m/s)
    v0=0;
    float x00=x0;
    float x1=dx(v0,h,x0);
    float v1=dv(G,M,x0,h,v0);
    cout << x0<<" "<<v0<<" "<<"0"<<endl;

    int i = 1;

    while(x1>0.01*x00){
        float t=h*i;
        cout << x1<<" "<<v1<<" "<<t<<endl;
        float x1prov = x1;
        float v1prov = v1;
        x1=dxlf(v1, h, x0);
        v1=dvlf( G, M, x0, h, v0);
        x0=x1prov;
        v0=v1prov;
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
    res = (v*2.0*h)+x0;
    return res;

}

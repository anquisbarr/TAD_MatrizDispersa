#include <iostream>
#include "MatrizDispersa.h"
#include <time.h>

int main() {
    srand(time(nullptr));
    MatrizDispersa m1(5,5,5);
    m1.rellenar();
    MatrizDispersa m2 =m1.transpuesta();
    MatrizDispersa m3=5*m1;
    MatrizDispersa m4= m1+m3;
    for (int i=0;i<m1.getFila();i++){
        for (int j=0;j<m1.getColumna();j++){
            cout<<m1.getElement(i,j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matriz 2:"<<endl;
    for (int i=0;i<m2.getFila();i++){
        for (int j=0;j<m2.getColumna();j++){
            cout<<m2.getElement(i,j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matriz 3: "<<endl;
    for (int i=0;i<m3.getFila();i++){
        for (int j=0;j<m3.getColumna();j++){
            cout<<m3.getElement(i,j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Matriz 4: "<<endl;
    for (int i=0;i<m4.getFila();i++){
        for (int j=0;j<m4.getColumna();j++){
            cout<<m4.getElement(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
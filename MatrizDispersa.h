//
// Created by Sebastian Q.B on 5/09/2019.
//

#ifndef TAD_MATRIZDISPERSA_MATRIZDISPERSA_H
#define TAD_MATRIZDISPERSA_MATRIZDISPERSA_H

typedef unsigned long int tipoEntero;
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
class MatrizDispersa {
private:
    int c_filas;int  dispersion;
    int c_columnas;
    tipoEntero c_noNulos;
    vector<tipoEntero>vector_valores;
    vector<tipoEntero>vector_pFilas;
    vector<tipoEntero>vector_pColumnas;
public:
    MatrizDispersa();
    MatrizDispersa(const long int &,const  long int &);
    MatrizDispersa(const long int &,const  long int &,const long int &);

    int getColumna(){return c_columnas;}
    int getFila(){return c_filas;}
    friend MatrizDispersa operator *(const int &,const MatrizDispersa &);
    friend MatrizDispersa operator*(const MatrizDispersa &, const MatrizDispersa &);
    friend MatrizDispersa operator+(const MatrizDispersa &,const MatrizDispersa &);
    void rellenar();
    int getElement(const int &firstIndex,const int &secondIndex)const;
    virtual ~MatrizDispersa();
    void setAllValues(const int &);
    MatrizDispersa transpuesta();
};




#endif //TAD_MATRIZDISPERSA_MATRIZDISPERSA_H

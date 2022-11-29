#pragma once
#include <iostream>
#include <cstring>
#include "myFunctions.h"

using namespace std;






class Coloana
{
    private:
    string numeColoana=NULL;
    string tipColoana=NULL;
    int dimensiuneColoana=0;
   


    
    public:

    void setNumeColoana(string numeColoana)
    {
        this->numeColoana=numeColoana;
    }
    void setTipColoana(string tipColoana)
    {
        this->tipColoana=tipColoana;
    }
    void setDimensiuneColoana(int dimensiuneColoana)
    {
        this->dimensiuneColoana=dimensiuneColoana;
    }





};


class Tabel
{
    private:
    string numeTabel=NULL;
    string numeColoana=NULL;
    string tipColoana=NULL;
    int dimensiuneColoana=0;
    Coloana* coloane=NULL;
    public:

    


};

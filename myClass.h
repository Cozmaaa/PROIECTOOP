#pragma once
#include <iostream>
#include <cstring>
#include "myFunctions.h"

using namespace std;

class Coloanaint
{
    private:

    string numeColoana="Anonim";
 //   string tipColoana=NULL;
    int dimensiuneColoana=0;
    int* informatii = NULL;


    public:

    void setNumeColoana(string numeColoana)
    {
        this->numeColoana=numeColoana;
    }
    void setDimensiuneColoana(int dimensiuneColoana)
    {
        this->dimensiuneColoana=dimensiuneColoana;
    }

    Coloanaint& operator = ( int* informatii )
    {
        this->informatii = new int[this->dimensiuneColoana];
        for(int i = 0;i<this->dimensiuneColoana;i++)
        {
            this->informatii[i] = informatii[i];
        }

        return *this;
    }




    ~Coloanaint()
    {
        delete[] informatii;
    }


};



class Coloanafloat
{
    private:

    string numeColoana="Anonim";
 //   string tipColoana=NULL;
    int dimensiuneColoana=0;
    float* informatii = NULL;


    public:

    void setNumeColoana(string numeColoana)
    {
        this->numeColoana=numeColoana;
    }
    void setDimensiuneColoana(int dimensiuneColoana)
    {
        this->dimensiuneColoana=dimensiuneColoana;
    }

    Coloanafloat& operator = ( float* informatii )
    {
        this->informatii = new float[this->dimensiuneColoana];
        for(int i = 0;i<this->dimensiuneColoana;i++)
        {
            this->informatii[i] = informatii[i];
        }

        return *this;
    }




    ~Coloanafloat()
    {
        delete[] informatii;
    }


};




class Coloanastring
{
    private:

    string numeColoana="Anonim";
 //   string tipColoana=NULL;
    int dimensiuneColoana=0;
    string* informatii = NULL;


    public:

    void setNumeColoana(string numeColoana)
    {
        this->numeColoana=numeColoana;
    }
    void setDimensiuneColoana(int dimensiuneColoana)
    {
        this->dimensiuneColoana=dimensiuneColoana;
    }

    Coloanastring& operator = ( string* informatii )
    {
        this->informatii = new string[this->dimensiuneColoana];
        for(int i = 0;i<this->dimensiuneColoana;i++)
        {
            this->informatii[i] = informatii[i];
        }

        return *this;
    }




    ~Coloanastring()
    {
        delete[] informatii;
    }


};


class Tabel
{
private:
    char* numeTabel = NULL;
    string numeColoana = "NIMIC";
    string tipColoana = "NICIUNA";
    int dimensiuneColoana = 0;
    // Coloana* coloane=NULL;
public:

   void setNumeTabel(char* numeTabel)
    {   
        delete[] this->numeTabel;
        this->numeTabel = new char[strlen(numeTabel) + 1];
        this->numeTabel = numeTabel;

    }
    string getNumeTabel()
    {
        return this->numeTabel;
    }
};
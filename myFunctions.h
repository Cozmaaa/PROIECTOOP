#pragma once

#include <iostream>
#include <cstring>
#include "myClass.h"

using namespace std;

char *toLower(char *sir) //Functie care converteste un sir de caractere in litere mici si returneaza un pointer catre sirul modificat
{
    int lungimeSir = strlen(sir);
    //se face lungimeSir=strlen(sir) pentru a reduce complexitate programului la O(n)
    for (int i = 0; i < lungimeSir; i++)
    {
        if (sir[i] >= 'A' && sir[i] <= 'Z')
        {
            sir[i] = sir[i] + 32;
        }
    }
    return sir;
}


char *citireComanda(char comanda[100])
{
    int contor = 0;
    int i=0;
    char *informatii[2000];
    cout << "Introduceti comanda: ";
    cin.getline(comanda, 100);
    char *p = strtok(comanda, " (");
    while (p) //Se parcurge sirul de caractere pana cand nu mai exista tokenuri
    {
   
        if (strcmp(toLower(p), "create") == 0) //Se verifica daca tokenul curent este "create" 
        {
            p = strtok(NULL, " ("); // se trece la urmatorul token
            if (strcmp(toLower(p), "table") == 0)
            {
                p = strtok(NULL, " (");
                cout << "Numele tabelei este: " << p << endl;
                informatii[0] = p; //Se stocheaza numele tabelei in vectorul informatii pe pozitia 0
                int i = 1; // il punem pe i in afara while-ului pentru a memora toate coloanele , nu doar ultima ( daca il punem in while, i se va reseta la fiecare iteratie)
                p = strtok(NULL, " (");
                while (p)
                {
                    
                   
                    if (p)
                    {
                        cout << "Numele coloanei este: " << p << endl;
                        informatii[i++] = p; //Se stocheaza numele coloanei in vectorul informatii pe pozitia i
                    }
                    p = strtok(NULL, " (");
                    if (p)
                    {
                        cout << "Tipul coloanei este: " << p << endl;
                        informatii[i++] = p; //Se stocheaza tipul coloanei in vectorul informatii pe pozitia i
                    }
                    p = strtok(NULL, " (");
                    if (p)
                    {
                        cout << "Dimensiunea coloanei este: " << p << endl;
                        informatii[i++] = p; //Se stocheaza dimensiunea coloanei in vectorul informatii pe pozitia i
                    }
                    p = strtok(NULL, " (");
                    if (p)
                    {
                        cout << "Valoarea implicita este: " << p << endl;
                        int copiei=i;
                        for(int j=0;j<atoi(informatii[copiei-1]);j++) //Se copiaza valorile implicite in vectorul informatii //atoi(informatii[copiei-1]) este dimensiunea coloanei                    
                        {// atoi transforma un sir de caractere in intreg
                            informatii[i++] = p; //Se stocheaza valoarea implicita in vectorul informatii pe pozitia i 
                           p=strtok(NULL," ("); //Se trece la urmatorul token
                        }

               
                    }
                    for (int j = 0; j < i; j++)
                    {
                        cout << informatii[j] << endl; //Se afiseaza toate informatiile salvate despre tabel 
                    }
                    contor++;
                    
                }
               char c[3]={(char)(contor+48)};
                informatii[i]=c;
                cout<<informatii[i];
            }
            else //Daca tokenul curent nu este "table" se afiseaza un mesaj de eroare
             {
                cout << "Comanda gresita!" << endl;
                break;
            }
        }
        else //Daca tokenul curent nu este "create" se afiseaza un mesaj de eroare
        {
            cout << "Comanda invalida";
            break;
        }
    }


  return *informatii;  //Se returneaza vectorul informatii
}


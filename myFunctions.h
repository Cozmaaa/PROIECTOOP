#pragma once

#include <iostream>
#include <cstring>

using namespace std;

char *toLower(char *sir)
{
    for (int i = 0; i < strlen(sir); i++)
    {
        if (sir[i] >= 'A' && sir[i] <= 'Z')
        {
            sir[i] = sir[i] + 32;
        }
    }
    return sir;
}


char* citireComanda(char comanda[100])
{
    char *informatii[2000];
    cout << "Introduceti comanda: ";
    cin.getline(comanda, 100);
    char *p = strtok(comanda, " (");
    while (p)
    {
        // cout << p << endl;
        if (strcmp(toLower(p), "create") == 0)
        {
            p = strtok(NULL, " (");
            if (strcmp(toLower(p), "table") == 0)
            {
                p = strtok(NULL, " (");
                cout << "Numele tabelei este: " << p << endl;
                informatii[0] = p;
                while(p)
                {   int i=1;
                    p=strtok(NULL, " (");
                    if(p)
                    {
                        cout << "Numele coloanei este: " << p << endl;
                        informatii[i++] = p;
                    }
                    p=strtok(NULL, " (");
                    if(p)
                    {
                        cout << "Tipul coloanei este: " << p << endl;
                        informatii[i++] = p;
                    }
                    p=strtok(NULL, " (");
                    if(p)
                    {
                        cout << "Dimensiunea coloanei este: " << p << endl;
                        informatii[i++] = p;
                    }
                    p=strtok(NULL, " (");
                    if(p)
                    {
                        cout << "Valoarea implicita este: " << p << endl;
                        informatii[i++] = p;
                    }
                    for(int j=0; j<i; j++)
                    {
                        cout << informatii[j] << endl;
                    }
                    return *informatii;

                }
            }
            else
            {
                cout << "Comanda gresita!" << endl;
                break;
            }
        }
        else
        {
            cout << "Comanda invalida";
            break;
        }
    }
}
/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Wilsen Hernandez. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
/* WILSEN HERNANDEZ
 * 15/06/2016
 * CAO403 Programacion II
 * Seccion 02
 * Taller II - Estructuras Jerarquicas - Arboles
 * Comprobar si un Arbol es Arbol Binario de Busqueda
 * */
 
#include <iostream>
#include <string>
#include <list>
#include "../EstructurasJerarquicas/BST.hpp"

using namespace std;

int main(int argc, char **argv)
{
    
    Traverse orden;
    string s;
    bool enter = false;
    int numeroIn, N;
        
    while (cin >> s)
    {
        list<int> porden, inorden;
        if (enter)
            cout << endl;
        else
            enter = true;
        
        if (s == "PREORDEN")
            orden = preorden;
        else if (s == "POSTORDEN")
            orden = postorden;
            
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> numeroIn;
            porden.push_back(numeroIn);
        }
        cin >> s;
        
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> numeroIn;
            inorden.push_back(numeroIn);
        }
        
        BST<int> tree(porden, inorden, orden);
        
        if (tree.bst())
            cout << "ES binario de busqueda.";
        else
            cout << "NO es binario de busqueda.";
    }
    
    return 0;
}

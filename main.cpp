#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


void imprimir(map<string,int> map){

    for(auto it:map){

        cout<<it.first<<" "<<it.second<<endl;
    }

}

void lista(int lines) {
    map<string, int> repeticiones_paises;
    string persona;
    string pais;

    for (int i = 0; i < lines; i++) {
        cin >> pais;
        getline(cin, persona);
        if (repeticiones_paises.find(pais) != repeticiones_paises.end()) {

            repeticiones_paises[pais]++;
        } else {
            repeticiones_paises.insert(pair<string, int>(pais, 1));

        }


    }
    imprimir(repeticiones_paises);
}


int main() {
    int lines;
    cin>>lines;
    lista(lines);
    return 0;
}


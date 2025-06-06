#include <iostream>
using namespace std;

int main(){
    int array[2] = {72, 1};

    //encuentra el menor numero del array
    int minimun = min(array[0], array[1]);
    int indexOfMin;
    
    for (int i = 0; i < 2 ; i++)
    {
        if (minimun == array[i])
        {
            //recorre el array hasta encontrar el valor minimo y guarda su indice
            indexOfMin = i;
        }
    }

    cout<<indexOfMin<<" es el indice del menor numero del array"<<endl;
    return 0;
}
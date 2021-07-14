#include <iostream>

using namespace std;

void arrayPrint(int array[], int size);

int main()
{
    int linda[7] = {4,5,3,6,6,22,4};

    int kofi[6]= {2,44,33,55,2,23};

    arrayPrint(kofi, 6);



    return 0;
}

void arrayPrint(int array[], int size){

        for (int x=0; x<size; x++){

            cout << array[x] << endl;
        }

}

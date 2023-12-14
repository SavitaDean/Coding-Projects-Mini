// Purpose: This program interates through a files contents and lists the 
// top 3 numbers in the file from greatest to least in order.
// Written by: Savita Dean

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cerr << "ERROR: A filename must be specified as the first argument.\n";
        exit(EXIT_FAILURE);
    }
 
    ifstream ifs(argv[1]);
    if (!ifs)
    {
        cerr << "File not readable!" << endl;
        exit(1); // 1 stands for error
    }
    // crete 3 integers to hole the top 3 largest numbers in the file
    int read_int;


// 1 1 1
    int values[25] = {0};
    int index = 0;
    while(true){
        ifs >> read_int;
        values[index] = read_int;
        index++;
        if (ifs.eof()){
            break;
        }
    }

    int arraySize = index;
    for(int i = 0; i < arraySize; i++){
        int maxIndex = i;
        for(int j = i + 1; j < arraySize; j++){
           if(values[j]  >  values[maxIndex]){
               maxIndex = j;
           }
        }
        if(i != maxIndex){
            int temp = values[i];
            values[i] = values[maxIndex];
            values[maxIndex] = temp;
        }
    }
    for(int k = 0; k < 3; k++){
        std::cout << values[k] << std::endl;
    }
}
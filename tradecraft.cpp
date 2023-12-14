// Purpose: This program reads through a file, cracks the cipher encrypted text,
// and determines the shift amount.
// Written by: Savita Dean
// *still in progress*

#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cerr << "ERROR: A filename must be specified as the first argument.\n";
        exit(EXIT_FAILURE);
    }
    //open file and check if it is readable
    ifstream ifs(argv[1]);
    if (!ifs)
    {
        cerr << "File not readable!" << endl;
        exit(1); // 1 stands for error
    }

    //Read the file a string
    //Create a char variable that 
    char alph;
    string entire_file;
    while (ifs >> alph){
    

    

    //Read the file line by line
    /*while(file)
    {   
        ifs >> alph;
        
        entire_file += alph;
        //entire_file += alph;
    }*/

    float shiftDiff[26];
    
    int numofletters[26];
    int filsize = entire_file.size();

    //Loop through each character in the string both upper and lower case
    //    
    for(int i = 0; i < 26; i++)
    {
        int total = 0;
        numofletters[i] = 0;
    
    for(int j = 0; j < filsize; j++)
    {
        char letter = entire_file[j];

        if(letter >= 'a' && letter <= 'z')
        {
            numofletters[letter - 'a']++;
            total++;
        }
        else if(letter >= 'A' && letter <= 'Z')
        {
            numofletters[letter - 'A']++;
            total++;
        }
    
    }
    //This is the expected frequency of each letter in the string
    double frequency[26]
    = {12.02, 9.10, 8.12, 7.68, 7.31, 6.95, 6.28, 6.02, 5.92, 4.32, 3.98, 2.88, 2.71,2.61,2.30, 2.11, 2.09, 2.03, 1.82, 1.49, 1.11, 0.69, 0.17, 0.11, 0.10, 0.07};

    int freqTotal = 0;
    for(int q = 0; q < 26; q++){
        freqTotal += numofletters[q];
    }

    int maxValue = 0;
    int maxIndex = 0;
   for(int k = 0; k < 26; k++){
        std::cout<< numofletters[k] <<std::endl;
        if(numofletters[k] > maxValue){
            maxValue = numofletters[k];
            maxIndex = k;
        }
   }
    int shift = 0;
   shiftDiff[i] = ((abs((float)maxValue / (float)freqTotal) * 100) - frequency[0]);
    /*cout << shiftDiff[i] << endl;
    cout << maxValue << endl;
    cout << freqTotal << endl;
    cout << " "<< endl;*/

    /*float minFloatValue = 10000.0f;
    int shiftAns = 0;
    for(int m = 0; m < 26; m++){
        if(shiftDiff[m] < minFloatValue){
            minFloatValue = shiftDiff[m];
            shiftAns = m;
        }
    }*/
   //cout << "The shift amount is: " << shiftAns << endl;
    
    /*double smallest_diff = ;
    int shift = 0;

    for(int j = 0; j < 26; j++)
    {
        double error = 0.0;
        for(int i = 0; i < 26; i++)
        {

            int observed = numofletters[(i + j) % 26];
            double expected = total * frequency[i];

            double diff = observed - expected;
            error += diff * diff/expected;
        }
        if(error < smallest_diff)
        {
            smallest_diff = error;
            shift = j;
        
        }
        
        
    }*/

    if(ifs.eof()){
            break;
        }
        
    }
    }

}
    


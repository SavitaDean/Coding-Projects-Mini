/*
 * Purpose: Decides if a word entered by the user is a palindrome.
 * Completed by: Savit Dean
 */
#include <iostream>
#include <string>

using namespace std;

int main() {

    string word; 
    //Prompt user for word to check
    cout << "Greetings! I am the palindrome decider!"<< endl;
    //create a while loop that retrieves the prompted word from the user.
    while(true){
        getline(cin,word);
        if (word.length() <= 0)
        {
            break;
        }
        cout << "Please enter a word: ";
    
    //Created variables denoting word length and length/2 to get the legth of half in 
    //order to compare the first half to the second half of the word given by the user.
    //create a boolean statement used in the loop
    short len = word.length();
    short halflen = (word.length())/2;
    bool palindrome = true;
    int match = 0;
    //this loop will first test the perameaters of a palindrome: if the first half of the word
    //is the same as the second have it is a palindrome. Make a call to ana array to compare
    //the first element in the array called word to the last element and work its way in.
        for(int i = 0; i <= halflen;  i++){
            if (word[i] != word[len - 1 - i]){ 
                palindrome = false;
                break;
            }
            //i+1 indicates the number of matches
            match = i + 1;
        }
        // if it is not a palindrom but at least 3 of the outer and inner letters match it is
        //close enough
        if(!palindrome){
            if(match >= 3){
                cout  << "Not quite a palindrome, but close enough." << endl; 
            }
            else{
                  cout << "Your word is NOT a palindrome. Thanks anyway!" << endl;
            }
        }
        // if it does not meet any of the above contitions it is a palindrome.
        else
        {
            cout << "Your word is a palindrome! Fantastic!" << endl;
        }
    }
	return 0;
}
    
 



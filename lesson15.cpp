#include <iostream>
#include<map>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    map<string, int> mymap;
    string text,word;
    cout << "Input text : ";
    getline(cin, text);
    stringstream ss(text);
    while (ss >> word) {
        mymap[word]++;
    }
    map<string, int>::iterator it;
    it = mymap.begin();
    while (it != mymap.end()) 
    {
        cout << it->first << ": " << it->second << " "; 
        it++; 
    }
    
}

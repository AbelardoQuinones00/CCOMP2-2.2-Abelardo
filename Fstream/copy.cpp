#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream source("source-file.txt");
    ofstream destination("file2.txt");
    string x;
    


    while(!source.eof()){ //source.eof()
        source >> x;
        destination << x;
    }
    source.close();
    return 0;
}
#include <fstream>
using namespace std;

int main(){
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");
    float x;
    float prom = 0;
    int cont = -1;
    
    while(x != -1){ //source.sof()
        source >> x;
        prom = prom + x;
        cont++;
    }
    prom = (prom + 1)/cont;
    destination << prom;
    source.close();
    return 0;
}
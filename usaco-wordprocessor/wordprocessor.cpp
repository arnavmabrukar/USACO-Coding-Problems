#include <iostream>

using namespace std;

int main(){
    
    int N, K; cin >> N >> K;
    // N words seperated by single spaces
    // no word is larger than K chars

    int lineLength = 0;

    for(int i = 0; i < N; i++){
        string word;
        cin >> word;
        
        if(lineLength + word.length() > K){
            lineLength = 0;
            cout << endl;
        }

        if(lineLength!=0){
            cout << " ";
        }
        cout << word;

        lineLength += word.length();
        
    }


    return 0;
}
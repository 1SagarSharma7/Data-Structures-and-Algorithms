
/*
i just have to maintain a vector 
and return the right vector accordingly
*/

#include <iostream>
using namespace std;
#include <vector>
vector<int>* getPathDFS(int** arr,int size,int sv,int ev, bool* visited,vector<int>* vtr1){
     
    // base case
    if(sv == ev){
        vector<int>* newVtr = new vector<int>();
        newVtr->push_back(sv);
        return newVtr;
    }
    
    // scal case
	visited[sv] = true;

    // recur case
        for(int i = 0; i < size; i++){
            if(arr[sv][i] == 1 && !visited[i]){
                vector<int>* vtrTemp = getPathDFS(arr, size, i, ev, visited, vtr1);
                if(vtrTemp != NULL){
                vtrTemp->push_back(sv);
                cout << "run_time" << endl;       
                return vtrTemp;
                }
            }
    
        }
         cout << "run_time1" << endl;       
    // end case 
    return NULL;
}
    
    /*
    6 3
    5 3
    0 1
    3 4
    0 3
    
    */


int main() {
     // intialize a adjecent matrix graph
    int vertices, edges;
    cin >> vertices >> edges;
    
    int** arr = new int*[vertices];
    for(int i = 0; i < vertices; i++){
        arr[i] = new int[edges];
        for(int j = 0; j < edges; j++){
            arr[i][j] = 0;
        }
    }
    
    // taking input into the graph
    for(int k = 0; k < edges; k++){
        int ver1, ver2;
        cin >> ver1 >> ver2;
        arr[ver1][ver2] = 1;
        arr[ver2][ver1] = 1;
    }
    bool* visited = new bool[vertices];
    for(int z = 0; z < vertices; z++){
        visited[z] = false;
    }
    
    // has path inputs
    int verS, verE;
    cin >> verS >> verE;
    vector<int>* vtr;
    
    // calling the function
    vtr = getPathDFS(arr, vertices, verS, verE, visited, vtr);
    
    // printing the vector
    for(int i = 0; i < vtr->size(); i++){
        cout << vtr->at(i) << " ";
    }
    
}

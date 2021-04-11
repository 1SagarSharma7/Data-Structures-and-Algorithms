#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

/*
we are gonna return a key and try to update a hashmap 
and just traverse backward in the hashmap and print the output
*/

int getPathBFS(int** graph,int vertices,int verS,int verE,unordered_map<int, int> map, queue<int> que){
    
    // create a visited bool array
    bool* visited = new bool[vertices];
	
    for(int i = 0; i < vertices; i++){
        visited[i] = false;
    }
    
    // adding in queue and checking if we found it or not
    que.push(verS);
    visited[verS] = true;
    
    while(!que.empty()){
        
        //updation
        verS = que.front();
        
        //checking whether we have a connection to the verE if yes return
        if(graph[verS][verE] == 1){
            map[verE] = verS;
            return verE;
        }
        for(int i = 0; i < vertices; i++){
            if(graph[verS][i] == 1 && !visited[i]){
                que.push(i);
                visited[i] = true;
                map[i] = verS;
            }
        }
        cout << verS << endl;
	que.pop();  
    }

    // deleting the bool array
    delete[] visited;
}

int main() {
     // intialize a adjecent matrix graph
    int vertices, edges;
    cin >> vertices >> edges;
    
    int** graph = new int*[vertices];
    for(int i = 0; i < vertices; i++){
        graph[i] = new int[vertices];
        for(int j = 0; j < vertices; j++){
            graph[i][j] = 0;
        }
    }
    
    // taking input into the graph
    for(int k = 0; k < edges; k++){
        int ver1, ver2;
        cin >> ver1 >> ver2;
        graph[ver1][ver2] = 1;
        graph[ver2][ver1] = 1;
    }
   
    // has path inputs
    int verS, verE;
    cin >> verS >> verE;
    
    // hashmap
    unordered_map<int, int> map;

    queue<int> que;
    int key = getPathBFS(graph, vertices, verS, verE, map, que);
    
    // printing
    // until i reach the starting vertex which is verE
    
    cout << key << " ";
    while(key != verS){
    	cout << map[key] << " ";
        key = map[key];
    }

}

/*
4 4
0 1
0 3
1 2
2 3
1 3
*/

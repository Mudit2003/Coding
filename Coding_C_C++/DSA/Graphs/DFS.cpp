#include<iostream>
#include<cmath>
#include<vector>
#include<unordered_map>
#include<utility>
#include<queue>

using namespace std ; 


class Graph{
	public:
		vector<vector<int>> adjList; 
		Graph(vector<pair<int , int >> edgeList , bool directed){
			int first , second ; 
			for(auto value:edgeList){
				first = value.first , second = value.second ; 
				insertEdge( first , second , directed) ; 
			}
		}

		Graph(){}

		void insertEdge(int u , int v , bool directed ){
			if(u >= adjList.size())
				while(adjList.size() <= u)
					adjList.push_back({});
			adjList[u].push_back(v);
			if(v >= adjList.size())
				while(adjList.size() <= v)
					adjList.push_back({});

			if(!directed){
				adjList[v].push_back(u);
			}  
		}
		
		void display(){
			for(int i = 0 , n = adjList.size() ; i<n ; i++){
				cout<<i<<endl; 
				for(auto value : adjList[i]){
					cout<<value<<" ";
				}
				cout<<endl ; 
		
			}
		}
		
		unordered_map<int , bool> visited; 		
		void explore(int vertex){
			visited[vertex] = true ; 
			cout<<adjList[vertex].size()<<" ";
			cout<<vertex<<endl;
		        if(adjList[vertex].size()){
				for(int i=0 ; i<adjList[vertex].size() ; i++){
					int value = adjList[vertex][i] ; 
					if(!visited[value]) explore(value);
			
				}
			}
		}
		vector<int> preVisit , postVisit ;
	        int time = 0 ; 	
		void exploreDFS(int vertex){
			visited[vertex] = true ;
			time++ ; 	
			preVisit[vertex] = time ; 
			cout<<adjList[vertex].size()<<" ";
			cout<<vertex<<endl;
			if(adjList[vertex].size()){
				for(int i=0 ; i<adjList[vertex].size() ; i++){
					int value = adjList[vertex][i] ; 
					if(!visited[value]){
					       	exploreDFS(value);
					}
			
				}
			}
			time++;
			postVisit[vertex] = time; 
		}
		void DFS(){
			preVisit.resize(adjList.size());
			postVisit.resize(adjList.size());
			for(int i= 0 ; i < adjList.size() ; i++){
				if(!visited[i]){
				       	exploreDFS(i) ; 
					
				}
			}

		}
		void BFS(int s){
			int n = adjList.size();
			if(s >= n) return ; 
			vector<int> distance(n ,(int)INFINITY );
			queue<int> bfs;
			bfs.push(s);
			visited[s] = true ; 
			while(!bfs.empty()){
				int u = bfs.front(); 
				cout<<u<<":"<<endl; 
				bfs.pop(); 
				for (auto v : adjList[u]){
					if(!visited[v]){
						cout<<v<<" ";
						bfs.push(v); 
					}
				}
				
			}
		}
};





int main(){
    vector<pair<int,int>> edgeList = {make_pair(1 , 2) ,make_pair(1 , 3) , make_pair(1 , 4) , make_pair(2 , 4) , make_pair(2 , 3) , make_pair(2 , 6)};
    Graph G{edgeList , true} ;
	G.BFS(1); 
	cout<<"No Idea"<<endl ; 
/*    G.DFS();
    cout<<"previsit"<<endl ; 
    for(int v= 0 , n = G.adjList.size() ; v < n ; v++)
	    cout<<v<<":"<<G.preVisit[v]<<endl;
 //   cout<<"postvisit"<<endl ; 
//    for(int v= 0 , n = G.adjList.size() ; v < n ; v++)
//	    cout<<v<<":"<<G.postVisit[v]<<endl;
   auto adjList = G.adjList ; 
//    for(int i= 0 , n = adjList.size() ; i < n ; i++){
//	    cout<<adjList[i].size()<<" ";
//    }*/
    return 0 ; 
    
}

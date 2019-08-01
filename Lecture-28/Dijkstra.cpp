#include<iostream>
#include<list>
#include<unordered_map>
#include<set>
#include<vector>
using namespace std;
class graph{
    int v;
    unordered_map<int, list<pair<int,int> > > mymap;

public:
    graph(int v){
        this->v = v;
    }
    void addEdge(int src,int dest,int weight, bool bider = false){
        mymap[src].push_back(make_pair(dest,weight));
        if(bider){
            mymap[dest].push_back(make_pair(src,weight));
        }
        return;
    }
    void shortestPath(int src){
        vector<int> dist;
        for(int i=0;i<v;i++){
            dist.push_back(INT_MAX);
        }
        dist[src] = 0;
        set<pair<int,int> > s;
        // dist, element  - as we need sorting according to dist
        s.insert(make_pair(0,src));
        while(!s.empty()){
            auto minPairIterator = s.begin();  // min distace available
            int currVertex = minPairIterator->second;
            s.erase(minPairIterator);
            list<pair<int,int> > currList = mymap[currVertex];

            for(auto currListIt = currList.begin();currListIt!=currList.end();currListIt++){
                int parentDist = dist[currVertex];
                int weight = currListIt->second;
                // if distance though currVertex is less that existing distance
                if(parentDist+weight < dist[currListIt->first]){
                    int currDist = parentDist+weight;
                    int currData = currListIt->first;
                    auto sit = s.find(make_pair(dist[currListIt->first],currData));
                    if(sit!=s.end()){
                        s.erase(sit);
                    }
                    s.insert(make_pair(currDist,currData));
                    dist[currData] = currDist;
                }
            }
        }
        for(int i=0;i<v;i++){
            cout<<dist[i]<<" ";
        }
        cout<<endl;
    }

    void print(){
        unordered_map<int, list<pair<int,int> > > :: iterator mapit;
        for(mapit = mymap.begin();mapit!=mymap.end();mapit++){
            cout<<mapit->first<<" :: ";
            list<pair<int,int> > :: iterator listit;
            for(listit = mapit->second.begin();listit!=mapit->second.end();listit++){
                cout<<"("<<listit->first<<","<<listit->second<<")";
                cout<<"-->";
            }
            cout<<"NULL"<<endl;
        }
    }

};
int main(){
    graph g(9);
    g.addEdge(0,1,4,true);
    g.addEdge(0,7,8,true);
    g.addEdge(1,7,11,true);
    g.addEdge(1,2,8,true);
    g.addEdge(2,8,2,true);
    g.addEdge(2,3,7,true);
    g.addEdge(2,5,4,true);
    g.addEdge(7,8,7,true);
    g.addEdge(7,6,1,true);
    g.addEdge(6,8,6,true);
    g.addEdge(6,5,2,true);
    g.addEdge(5,3,14,true);
    g.addEdge(5,4,10,true);
    g.addEdge(3,4,9,true);
    g.shortestPath(0);

}

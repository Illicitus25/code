#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout<<pq.top()<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~pair
    // pair<int,int> p = {5,18};
    // cout<< p.first<<" "<< p.second<<endl;

    // pair<int,int> arr[5] ={{1,2},{3,4},{5,6},{7,8},{9,10}};
    // cout<<arr[2].second<<endl;

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~vector
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    // v.push_back(5);
    // v.push_back(2);

    // vector<int> vec(v);
    // vector<int>::iterator it = vec.begin();
    // for(int i=0; i < 5;i++){
    //     cout<< *it<<endl;
    //     it++;
    // }

    // v.erase(v.begin()+2,v.end());
    // v.insert(v.begin()+1,3,9);
    // v.insert(v.begin(),vec.begin(),vec.end());
    // for(auto t =v.begin() ; t!= v.end();t++){
    //     cout<< *t<<endl;
    // }

    // for(auto it : vec){
    //     cout<< it<<endl;
    // }



    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~list
    // same as vector just works from both sides
    // list<int> ls;
    // ls.push_front(1);
    // ls.emplace_front(2);
    // ls.emplace_back(3);
    // list<int>::iterator it = ls.begin();
    // for(it;it!=ls.end();it++){
    //     cout<<*it<<endl;
    // }

    // ls.pop_back();

    // for(auto it = ls.begin();it!=ls.end();it++){
    //     cout<<*it<<endl;
    // }


    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~deque
    // same as list and vector


    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~stack
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // stack<int> st1;
    // st1.push(6);

    // cout<<st.top()<<endl;
    // cout<<st1.top()<<endl;
    // st.swap(st1);
    // st1.pop();
    // cout<<st1.size()<<endl;
    // cout<<st1.top()<<endl;
    // st1.empty();


    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~queue
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.back() +=5;
    // cout<<q.back()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // swap,empty,size same as stack


    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~priority queue
    // priority_queue<int> pq;
    // pq.push(5);
    // pq.push(2);
    // pq.push(8);
    // pq.push(10);
    // pq.pop();
    // cout<< pq.top()<<endl;

    // size, swap, empty same as others

    // minimum heap or opp priority queue
    // priority_queue<int , vector<int> , greater<int>> pq1;
    // pq1.push(5);
    // pq1.push(2);
    // pq1.push(8);
    // pq1.push(10);
    // cout<<pq1.top()<<endl;


    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~set
    // set<int> st; // sorted + unique
    // st.insert(1);
    // st.emplace(2); //{1,2}
    // st.insert(2); //{1,2}
    // st.insert(4); //{1,2,4}
    // st.insert(3); //{1,2,3,4}
    // // begin(), end(), rbegin(), rend(), size(), empty(), swap() same as others
    // auto it = st.find(5); // it is iterator and if 5 is not found it gives st.end()
    // st.erase(3); // takes logarithmic time
    // st.insert(5);
    // int cnt = st.count(2); //either 1 or 0, here 1
    // auto it1 = st.find(2);
    // auto it2 = st.find(5);
    // st.erase(it1,it2); // erase [2,5) gives {1,5}

    // everything in logarithmic time


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~multi set
    // multiset<int> ms; // sorted
    // //everything same as set
    // ms.insert(1); //{1}
    // ms.insert(1); //{1,1}
    // ms.emplace(1); //{1,1,1}
    // ms.erase(1); //erases all the 1s
    // ms.erase(ms.find(1)); //erases the first occurance of 1
    // ms.erase(ms.find(1), next(ms.find(1),2)); //erases 1st and 2nd occurance of 1



    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~unordered set
    // unordered_set<int> st; // unique, randomised order
    // // in most cases time complexity O(1)
    // // lower_bound and upper_bound does not work
    // // rest all functions same as above



    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~map






    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~Algorithms~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //sorting
    // int a[4] = {1,3,5,2};
    // vector<int> v1;
    // v1.push_back(5);
    // v1.push_back(1);
    // v1.push_back(3);
    // v1.push_back(2);
    // // sort(a,a+4);
    // // sort(a+2,a+4);
    // sort( a, a+4, greater<int>()); //sort in descending order
    // sort(v1.begin(),v1.end());
    // for(int i : a){
    //     cout<<i<<endl;
    // }

    // for(auto it : v1){
    //     cout<<it<<endl;
    // }


}
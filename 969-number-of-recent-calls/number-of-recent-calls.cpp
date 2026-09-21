class RecentCounter {
public:
vector<int> q;
int front=0;
int rear=0;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push_back(t);
        rear++;
        while(q[front]<t-3000 && front<rear){
            front++;
        }
        return rear-front;;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
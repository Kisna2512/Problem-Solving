class MyCircularQueue {
public:
    vector<int> a;
    int f,r,s,pr;
    int size;
    MyCircularQueue(int k) {
        a.assign(k,-1);
        size = k; f = 0; r = 0; s = 0; pr = 0;
    }
    
    bool enQueue(int val) {
        if(s < size){
            a[r] = val;
            pr = r;
            r = (r+1)%size;
            s++;
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(s == 0) return false;
        a[f] = -1;
        f = (f+1)%size;
        s--;
        return true;
    }
    
    int Front() {
        return a[f];
    }
    
    int Rear() {
        return a[pr];
    }
    
    bool isEmpty() {
        return s == 0;
    }
    
    bool isFull() {
        return s == size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
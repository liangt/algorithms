#ifndef FIFOCACHE_H_INCLUDED
#define FIFOCACHE_H_INCLUDED

#include <iostream>

// 当缓冲区满时，每次置换掉最先入队的数据，即存活时间最长的数据
class FIFOCache{
public:
    FIFOCache(int n): head(0), length(0), capacity(n){
        queue = new int [n];
    }
    ~FIFOCache(){
        delete [] queue;
    }

    // 返回true表示命中，false表示未命中
    bool get(int v){
        int pos = head;
        for(int i=0; i<length; i++){
            if(queue[pos] == v)
                return true;
            pos = (pos + 1) % capacity;
        }
        queue[pos] = v;
        if(length == capacity)
            head = (head + 1) % capacity;
        else
            length++;
        return false;
    }
   int size() const {
        return length;
    }
    void print() const{
        int pos = head;
        for(int i=0; i<length; i++){
            std::cout<<queue[pos]<<" ";
            pos = (pos + 1) % capacity;
        }
        std::cout<<std::endl;
    }
private:
    int* queue;
    int head;
    int length;
    int capacity;
};

#endif // FIFOCACHE_H_INCLUDED

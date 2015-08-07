#ifndef LFUCACHE_H_INCLUDED
#define LFUCACHE_H_INCLUDED

#include <iostream>

// 当缓冲区满时，每次置换掉使用次数最少的元素
class LFUCache{
public:
    LFUCache(int n): length(0), capacity(n){
        val = new int[n];
        freq = new int[n];
    }
    ~LFUCache(){
        delete [] freq;
        delete [] val;
    }

    // 返回true表示命中，false表示未命中
    bool get(int v){
        for(int i=0; i<length; i++)
            if(val[i] == v){
                freq[i]++;
                while(i && freq[i] > freq[i-1]){
                    swap(i);
                    i--;
                }
                return true;
            }
        if(length == capacity){
            val[length-1] = v;
            freq[length-1] = 1;
        }
        else{
            val[length] = v;
            freq[length] = 1;
            length++;
        }
        return false;
    }
   int size() const {
        return length;
    }
    void print() const{
        for(int i=0; i<length; i++)
            std::cout<<val[i]<<" ";
        std::cout<<std::endl;
    }
private:
    int* val;
    int* freq;
    int length;
    int capacity;
    void swap(int i){
        int tmp = val[i];
        val[i] = val[i-1];
        val[i-1] = tmp;

        tmp = freq[i];
        freq[i] = freq[i-1];
        freq[i-1] = tmp;
    }
};

#endif // LFUCACHE_H_INCLUDED

#ifndef LRUCACHE_H_INCLUDED
#define LRUCACHE_H_INCLUDED

// 当缓冲区满时，每次置换掉最近使用最少的元素
class LRUCache{
public:
    LRUCache(int n): length(0), capacity(n){
    }
    ~LRUCache(){
    }

    // 返回true表示命中，false表示未命中
    bool get(int v){
    }
   int size() const {
        return length;
    }
    void print() const{
    }
private:
    int length;
    int capacity;
};

#endif // LRUCACHE_H_INCLUDED

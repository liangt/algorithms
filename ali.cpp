/*
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct  UserProfile{
         long userId;    //用户ID
         map<long, double> preferTags; //偏好标签：key=标签ID，value=偏好得分
};

struct Product{
         long productId;        //商品ID
         vector<long> tags; //标签ID列表
};

struct ProductScore{
    long productId;      //商品ID
    double score;           //用户对商品的评分
};

 vector<Product> ProductsPool; //所有商品

// 比较函数
 bool cmp(ProductScore ps1, ProductScore ps2){
     return ps1.score > ps2.score;
 }

vector<long> recommend(UserProfile userProfile, vector<Product> productsPool){
    vector<ProductScore>  pscore;
    ProductScore temp;
    for(int i=0; i<productsPool.size(); i++){
        temp.productId = productsPool[i].productId;
        temp.score = 0;
        for(int j=0; j<productsPool[i].tags.size(); j++){
            if(userProfile.preferTags.find(productsPool[i].tags[j]) != userProfile.preferTags.end())
                temp.score += userProfile.preferTags[productsPool[i].tags[j]];
        }
        pscore.push_back(temp);
    }

    // 对商品按评分从大到小排列
    sort(pscore.begin(), pscore.end(), cmp);

    vector<long> products;
    for(int i=0; i<10 && i<pscore.size(); i++)
        products.push_back(pscore[i].productId);

    return products;
}

int main(){
    return 0;
}
*/

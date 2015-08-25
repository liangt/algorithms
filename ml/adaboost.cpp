/*
#include <iostream>
#include <cmath>
#include <vector>
#include <utility>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int NUM_FEATURES = 100;
const int NUM_SAMPLES = 1000;
const int NUM_WEAK_CLASSIFIERS = 10;

typedef pair<double, int> feature;  // (the i-th feature, tag)
struct weak_classifier{
    int feature_idx;
    double threshold;
    double alpha;
} ;
vector<feature> features[NUM_SAMPLES];
vector<weak_classifier> strong_classifier;
double weight[NUM_SAMPLES];                 // weight of each sample
int tag[NUM_SAMPLES];

void generate_samples(){
    for(int i=0; i<NUM_SAMPLES; i++){
        tag[i] = ((i & 1) << 1) - 1;
        for(int j=0; j<NUM_FEATURES; j++)
            features[j].push_back(feature(rand() % 100, i));
    }
}

weak_classifier find_weak_classifier(){
    int feature_idx, idx, pre;
    double threshold, alpha, right, wrong, thred, mwrong=5;
    for(int i=0; i<NUM_FEATURES; i++){
        thred= features[i][0].first - 1;
        for(int j=0; j<NUM_SAMPLES; j++){
            idx = features[i][j].second;
            if(tag[idx] == -1)
                wrong += weight[idx];
            else
                right += weight[idx];
        }
        if(wrong < mwrong){
            feature_idx = i;
            threshold = thred;
            mwrong = wrong;
        }

        for(int j=1; j<NUM_SAMPLES; j++){
            pre = j -1;
            thred = (features[i][pre].first + features[i][j].first) / 2;
            idx = features[i][pre].second;
            if(tag[idx] == 1){
                wrong += weight[idx];
                right -= weight[idx];
            }
            else{
                wrong -= weight[idx];
                right += weight[idx];
            }
            if(wrong < mwrong){
                feature_idx = i;
                threshold = thred;
                mwrong = wrong;
            }
        }

        pre = NUM_SAMPLES - 1;
        thred = features[i][pre].first + 1;
        idx = features[i][pre].second;
        if(tag[idx] == 1){
            wrong += weight[idx];
            right -= weight[idx];
        }
        else{
            wrong -= weight[idx];
            right += weight[idx];
        }
        if(wrong < mwrong){
            feature_idx = i;
            threshold = thred;
            mwrong = wrong;
        }
    }
    alpha = (1 - mwrong) / mwrong;
    return weak_classifier{feature_idx, threshold, alpha};
}

void train(){
    // init
    double tmp = 1.0 / NUM_SAMPLES;
    for(int i=0; i<NUM_SAMPLES; i++)
        weight[i] = tmp;
    for(int i=0; i<NUM_FEATURES; i++)
        sort(features[i].begin(), features[i].end());

    // train
    weak_classifier weaker;
    int ith_feature, idx;
    double thred, scaler, sum;
    for(int i=0; i<NUM_WEAK_CLASSIFIERS; i++){
            weaker = find_weak_classifier();
            ith_feature = weaker.feature_idx;
            thred = weaker.threshold;
            scaler = weaker.alpha;
            sum = 0;
            for(int j=0; j<NUM_SAMPLES; j++){
                tmp = features[ith_feature][j].first;
                idx = features[ith_feature][j].second;
                if(tmp <= thred && tag[idx] == 1) // predict -1, target 1
                    weight[idx] *= scaler;
                else if(tmp > thred && tag[idx] == -1) // predict 1, target -1
                    weight[idx] *= scaler;
                sum += weight[idx];
            }
            for(int j=0; j<NUM_SAMPLES; j++)
                weight[j] /= sum;
            weaker.alpha = log(weaker.alpha) / 2;
            strong_classifier.push_back(weaker);
    }
}

int main(){
    generate_samples();
    train();
    for(int i=0; i<NUM_WEAK_CLASSIFIERS; i++)
        cout<<strong_classifier[i].feature_idx<<" "<<strong_classifier[i].threshold<<" "<<strong_classifier[i].alpha<<endl;
    return 0;
}
*/

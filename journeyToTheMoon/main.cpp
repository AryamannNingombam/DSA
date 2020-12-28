#include <iostream>
#include <vector>


using namespace std;
using intPair = pair<long long ,long long >;
using pairVector = vector<intPair>;

/*
 Main logic : The logic below runs on the principle of
 disjoint sets, where we have a representor of a particular
 set, in this particular question, we would have the
 countries as the set and a random astronaut out of all the
 astronauts would be the representative.
 So we would be having in the class Answer, a disjoint set containing
 all the astronauts and all of the astronauts would initially be their
 own representative(as in the beginning of the problem we woudn't know
 which country||set the astronaut would belong to). We would assign
 the representative a value less than zero and the absolute value
 of the negative number would equal to the number of astronauts in the set, initially all the values would be -1 due to the reason that
 at the beginning each astonaut would represent his own set(as stated above). If the value of the astronaut is not negative, then it means that it is not the representative of the set, and thus,
 it would contain the value of the index where it the representor of the set is.
 When we have made all the sets, as we have to make pairs that don't
 have the same country, we would apply the following formula :
 
 (total permutations to select two out of all the astronauts) -
 (total permutations to select two out of each of the sets);
 
 
 
 
 
 */



class Answer{
    //The number of astronauts
    long long  size;
    //vector containing the pair of astronauts given in the input;
    pairVector pairs;
    
    
    //This vector would do the main work,this is where the heights of the set, the representatives are held(if negative, it's a representative or it points to the representative)
    vector<long long > v;
    public:
    //initialization;
    Answer(long long  s,pairVector &p){
        this->size = s;
        this->pairs = p;
        //Putting all values  -1 as in the beginning all astronauts //would represent the set of itself;
        
        this->v.resize(s,-1);
    };
    
    //this method is used to find the representative of the set;
    long long  find(long long  x){
        if (this->v[x] < 0)return x;
        this->v[x] = this->find(this->v[x]);
        return this->v[x];
    }
    
    //this method is used to union two sets,
    //this would happen when we find out that the representative
    //astronauts belong to the same country, so we union them;
    void UNION(long long  a,long long  b){
        long long  finda = this->find(a);
        long long  findb= this->find(b);
        long long  temp = this->v[finda];
        this->v[finda] = findb;
        //This is done to add the height of the sets and
        //store it in the representative
        //this height storage would help us calculate the
        //final answer
        this->v[findb] += temp;
        return;

    };
    
    //P and C formula
    long long  NC2(long long  a){
      return ((a*(a-1)) / 2);
    };
  
    long long  run(){
        //We would first union all pairs to get all the astronauts
        //that belong in the same country to get together in one set;
        for (auto i : this->pairs){
            //this is to avoid a situation where
            //both representatives are the same, then we would
            //have an error as the representative would
            //keep pointing to itself;
            if (this->find(i.first) != this->find(i.second))this->UNION(i.first,i.second);
        };
        
        //final result;
        long long  counter = this->NC2(this->size);
        for (auto i: this->v){
            if (i < 0){
                //taking the height and subtracting it
                counter -= this->NC2(abs(i));
            }
        }
         
        return counter;
         
    }
    
    
};



int main(){
    //Taking inputs;
    long long  size,pairs;
    cin >> size >> pairs;
    pairVector p(pairs);
    for (long long  i{};i<pairs;i++){
        cin >> p[i].first >> p[i].second;
    }
    
    //Making an instance of the answer;
    auto ptr = Answer{size,p};

    long long  result = ptr.run();
    cout << result << '\n';

    
    return 0;
}






















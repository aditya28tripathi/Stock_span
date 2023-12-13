class Solution{
    
public:
vector<int> calculateSpan(int price[],int n){
    

vector<int> ans;
stack<int> s;

s.push(0);
ans.push_back(1);

for(int i = 1;i<n;i++){
    
    while(!s.empty() && price[s.top()]<=price[i]){
        s.pop();
    }
    
    if(s.empty()==1){
        ans.push_back(i+1);
    }
    
    else{
        ans.push_back(i-s.top());
    }
    s.push(i);
}
    
    return ans;
    
}
};

    #include<bits/stdc++.h>
    using namespace std;
    int nthRoot(int n, int m) {
        // Code here.
        if(m==1){
            return 1;
        }
        int start = 1;
        int end = m;
        while(start<=end){
            int mid=(end+start)/2;
            int ans =1;
            for(int i=1; i<=n; i++){
                ans*=mid;
            }
            if(ans==m){
                return mid;
            }
            else if(ans<m){
                start = mid+1;
            }
            else{
                end= mid-1;
            }
        }
        return -1;
    }
int main(){
   int n = 2;
   int m = 9;
   int res = nthRoot(n,m);
   cout<<res<<endl;
    return 0;
}

vector<vector<int> > Solution::generateMatrix(int A) {
vector<vector<int>>ans(A,vector<int>(A));
int l=0,r=A-1,t=0,b=A-1,d=0,num=1;
while(l<=r&&t<=b){
    if(d==0){
        for(int i=l;i<=r;i++){
            ans[t][i]=num;num++;
        }
        d=1;t++;
    }else if(d==1){
        for(int i=t;i<=b;i++){
            ans[i][r]=num;num++;
        }
        d=2;r--;
    }else if(d==2){
        for(int i=r;i>=l;i--){
            ans[b][i]=num;num++;
        }
        d=3;b--;
    }else if(d==3){
        for(int i=b;i>=t;i--){
            ans[i][l]=num;num++;
        }
        d=0;l++;
    }
}
return ans;
}

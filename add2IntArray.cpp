vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
   long long int a1=0,b1=0;
 
   for(int i=0;i<n;i++)
   a1+=a[i]*pow(10,n-i-1);
 
   for(int i=0;i<m;i++)
   b1+=b[i]*pow(10,m-i-1);
   
   vector<int>sum;
 
   long long int ans=a1+b1;
   
   while(ans>0){
    sum.push_back(ans%10);
 	ans/=10;
   }
   reverse(sum.begin(),sum.end());
   return sum;
}

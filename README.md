# count-unique-elements-of-an-array
code for counting unique elements in an arr TC=O(nlog) and SC=O(1)
//code--
  while(tc--)
    {
      int n;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      int counter=1;
      sort(arr.begin(),arr.end());
      debugvec(arr);
      for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1])counter++;
      }
      cout<<counter<<nl;
}
    

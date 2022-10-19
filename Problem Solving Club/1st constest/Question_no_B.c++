int n;
cin>>n;
vector<int> ve(n);
vector<int> vec(n);
for(int i=0; i<n; i++)
{
    int num;
    cin>>num;
    ve[i] = num;
}

vec[0] = ve[0] ;
for(int i=1; i<n; i++)
{
    vec[i] = vec[i-1] + ve[i];
}

for(int i=0; i<n; i++)
{
    cout<<vec[i]<<" "
}
cout<<endl;
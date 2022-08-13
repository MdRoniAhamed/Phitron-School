 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
      int arr[]={1,4,5,5,6,10};

    int freq[11]={0};

    for(int i=0;i<6;i++)

    {

        freq[arr[i]]++;

    }

    for(int i=2;i<=10;i++)

    {

        cout<<freq[i]<<" ";

    }
     return 0;
 }


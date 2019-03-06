#include <bits/stdc++.h>
using namespace std;
vector <int> v[2005];
int hist[2005];
long long large_rectangle (int n)
{
    stack <int> st;
    int i = 0;
    long long mx = 0;
    long long large_area= 0;
    while(i < n)
    {
        if(st.empty() || hist[st.top()] <= hist[i]){
            st.push(i++);

        }
        else
        {
            int top = st.top();
            st.pop();

            if(st.size() > 0)
            {
                large_area = hist[top] * (i - st.top() -1);
            }
            else
            {
                large_area = hist[top] * i;
            }
            mx = max(mx, large_area);
        }
    }

    while(st.size() > 0)
    {
        int top = st.top();
        st.pop();
         if(st.size() > 0)
            {
                large_area = hist[top] * (i - st.top() -1);
            }
            else
            {
                large_area = hist[top] * i;
            }
            mx = max(mx, large_area);
    }
    return mx;
}
int main()
{
    int n;
    int tes,o=0;
    scanf("%d",&tes);

    while(tes--)
    {
        o++;
        //scanf("%d",&n);
        int r, c;
        cin >> r >> c;
        long long ans=0;
        memset(hist,0,sizeof hist);
        //int arr[2001][2001] = {0};
        for(int i = 0; i < r; i++)
        {
           int k, c,cnt = 1;
           cin >> k >> c;
           while(k--)
           {
               int x;
               cin >> x;
               if(cnt % 2 == 1)
               {
                   while(x--)
                   {
                       v[i].push_back(c);
                   }
               }
               else
               {
                   while(x--){
                   if(c == 0)
                    v[i].push_back(1);
                   else
                    v[i].push_back(0);
                   }
               }
               cnt++;

           }
        }
         //long long ans =0;
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < v[i].size(); j++)
            {
                if(v[i][j] == 0)
                    hist[j] = hist[j] + 1;
                else
                    hist[j] = 0;
            }

            ans = max(ans, large_rectangle(v[i].size()));

        }
        printf("Case %d: %lld\n",o,ans);

        for(int i = 0; i <= r; i++) v[i].clear();

    }
}

#include <bits/stdc++.h>
using namespace std;
int hist[100005];
string s[2002];
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
    getchar();
    while(tes--)
    {
        getchar();

        getline(cin , s[0]);
        o++;
        //scanf("%d",&n);
        int r, c;
        r = s[0].size();
        c = r;
        for(int i = 1; i < r; i++)
            getline(cin, s[i]);
        long long ans=0;
        memset(hist,0,sizeof hist);
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < s[i].size(); j++)
            {
                if(s[i][j] == '1')
                {
                    hist[j] = hist[j] + 1;
                }
                else
                    hist[j] = 0;
            }



            ans = max(ans,large_rectangle(c));



        }
        printf("%lld\n",ans);
        if(tes>0)
                cout<< endl;

    }
}

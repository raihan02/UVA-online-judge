#include<bits/stdc++.h>
using namespace std;

int main()
{
     stack <int> st;
     //st.push(2);
      //st.push(9);
    int n;
    while(cin>>n)
    {
        if(n==0)break;


        int m,arr[10004]={0}, brr[10005]={0};
        while(cin>>m)
        {
            stack<int>st;
            arr[1] = m;
            brr[1] = 1;
            if(m == 0)
            {
                break;
            }
            for(int i = 2; i <= n; i++)
            {
                brr[i] = i;
                cin >> arr[i];
            }

            for(int i = 1, j= 1; i <= n;)
            {
                if(brr[i] == arr[j])
                {
                    while(st.size() > 0)
                    {
                        j++;
                        if(st.top() == arr[j])
                        {
                            st.pop();
                        }
                        else
                        {
                            i++;
                            break;
                        }
                    }
                    if(st.empty())
                    {
                        i++;
                        j++;

                    }
                }
                else
                {
                    st.push(brr[i]);
                    i++;
                }
            }

            if(st.empty())
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        printf("\n");

    }
}

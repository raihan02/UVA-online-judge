#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mx;
struct node
{
    node *next[3];
    int endmark;
  node()
  {
      for(int i = 0; i < 2; i++)
       next[i] = NULL;
      endmark = 0;
  }
};
void Build_trie (char *str , int len , node *curr)
{
    int t;
    for(int i = 0; i < len; i++)
    {
        int id = str[i] - '0';
        if(curr-> next[id] == NULL)
        {
            curr->next[id] = new node();
        }

        curr = curr->next[id];
         ++curr->endmark;
         t = curr->endmark * (i + 1);
         if(mx < t) mx = t;
    }
}
void del(node *cur) {
    for(int i=0; i < 2; i++)
        if(cur -> next[i])
            del(cur -> next[i]);
    delete (cur);
}
int main()
{

    int tes;
    scanf(" %d", &tes);
    while(tes--)
    {
        char s[50005];
        node *root = new node();
        int num;
        scanf("%d", &num);
        for(int i = 0; i < num; i++)
        {
            scanf(" %s" ,s);
            Build_trie(s, strlen(s) , root);
        }

        printf("%lld\n",mx);
        del(root);
        mx = 0;
    }

}

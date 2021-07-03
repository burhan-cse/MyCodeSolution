#include<bits/stdc++.h>
using namespace std;
const int high = 100009;
int ar[high], tree[high*3];

int build_tree(int pos, int l, int r){
    if(l==r){
        tree[pos] = ar[l];
        return tree[pos];
    }
    int mid = ((r+l)-1)/2;
    int left = pos*2;
    int right = pos*2+1;
    int minl = build_tree(left, l, mid);
    int minr = build_tree(right, mid+1, r);
    return tree[pos] = minl+minr;

}
int update(int pos, int start, int end, int l)
{
    if(start>l || end<l)
        return tree[pos];
    if(start==end && start==l)
        return tree[pos] = ar[l];

    int mid = (end+start-1)/2;
    int left = pos*2;
    int right = pos*2+1;
    int minl = update(left, start, mid, l);
    int minr = update(right, mid+1, end, l);
    return tree[pos] =  minl+minr;
}

int query(int pos, int start, int end, int l, int r)
{
    if(start>r || end<l)
        return 0;
    if(start>=l && end<=r)
        return tree[pos];
    int mid = (end+start-1)/2;
    int left = pos*2;
    int right = pos*2+1;
    int minl = query(left, start, mid, l, r);
    int minr = query(right, mid+1, end, l, r);
    return minl+minr;
}

int main()
{
    int t, te =1, n, q, type, l, r;
    scanf("%d", &t);
    while(t--)
    {

        scanf("%d%d", &n, &q);
        for(int i = 1; i<=n; i++)
            scanf("%d", &ar[i]);
        build_tree(1,1, n);
        printf("Case %d:\n", te++);
        while(q--)
        {
            scanf("%d%d", &type, &l);
            l++;
            if(type==1)
            {
                printf("%d\n", ar[l]);
                ar[l] = 0;
                update(1, 1, n, l);
            }
            else if(type==2)
            {
                scanf("%d", &r);
                r;
                ar[l]+=r;
                update(1, 1, n, l);
            }
            else
            {
                scanf("%d", &r);
                r++;
                printf("%d\n",query(1, 1, n, l, r));
            }
        }
    }
}

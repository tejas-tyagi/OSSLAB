# include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    int arr[n];
    double ans=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        ans+=arr[i];
    }

    printf("%lf",(1.0*ans)/n);


}

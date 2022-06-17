// //   NOT DONE YET    //  //


#include <iostream>
using namespace std;

void tripletSum(int *arr, int N, int key)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int tempsum = arr[i] + arr[j] + arr[k];
                if (tempsum == key)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

    int main()
    {
        int arr[10000], N, key;
        cin >> N >> key;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        tripletSum(arr, N, key);
    }

//Did not understand this.
/*
	vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    int left,right;
    for(int i=0;i<n-2;i++)
    {
        left=i+1;
        right=n-1;
        while(left<right)
        {
            if(arr[left]+arr[right]+arr[i]==K)
            {
                ans.push_back({arr[i],arr[left],arr[right]});
                int x=arr[left];
                int y=arr[right];
                while(left<right && arr[left]==x)
                {
                    left++;
                }
                while(left<right && arr[right]==y)
                {
                    right--;
                }
            }
            else if(arr[left]+arr[right]+arr[i]<K)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        while(i+1<n && arr[i]==arr[i+1])
        {
            i++;
        }
    }
    return ans;
}
*/
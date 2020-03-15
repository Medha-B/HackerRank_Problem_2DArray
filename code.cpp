#include <bits/stdc++.h>
using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) 
{
    int i=0, j=0, l, k=0, max=-100, sum, r=0;
    while(k<4)
    {
        l=0;
        while(l<4)
        {
            sum=0;
            r=l;
            for(i=k; i<k+3; i++)
            {
                for(j=l; j<l+3; j++)
                {
                    sum = sum + arr[i][j];
                }
            }
            sum = sum - arr[k+1][r]- arr[k+1][r+2];
            if(max<sum)
            {
              max=sum;
            }
            l++;
        }
        k++;
    }
     return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

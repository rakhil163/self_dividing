#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    vector<int>a;
i=1;
        while(i<=n) {
            if (((i % 10) != 0&&((i/10)%10)!=0)|i<10) {
                if (i < 10) {
                    a.push_back(i);
                } else if ((i > 10) && (i < 100)) {
                    if (((i % (i % 10)) == 0) && ((i % (i / 10)) == 0)) {
                        a.push_back(i);
                    }
                }
                else if ((i > 100) && (i < 1000)) {
                    if ((i % (i % 10)) == 0 && (i % ((i / 10) % 10)) == 0 && (i % (i / 100) == 0))
                        a.push_back(i);
                }
                else if((i > 1000) && (i < 10000))
                {
                    if (((i/100)%10)!=0) {
                        if ((i % (i % 10)) == 0 && (i % ((i / 10) % 10)) == 0 && (i % ((i / 100) % 10) == 0) &&
                            (i % (i / 1000) == 0))
                            a.push_back(i);
                    }
                }

            }
            i++;
        }



    for(i=0;i<a.size();i++)
        cout<<a[i]<<"\t";
}
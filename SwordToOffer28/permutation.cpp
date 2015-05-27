#include <iostream>
using namespace std;


void printList(int list[])
{
    int i;
	const int len = 3;
    cout << "{" ;
    for(i=0; i<len; ++i)
    {
	cout <<list[i];
        cout <<	((i+1 == len)? "": ",") ;
    }
    cout << "}" << endl;

}
//first method
void permutation(int list[], int s, int e, void(*print)(int list[]))
{
    int i;
    if(s > e)
    {
        (*print)(list);
    }
    else
    {
        for(i=s; i<=e; ++i)
        {
            swap(list[i], list[s]);
            permutation(list, s+1, e, print);
            swap(list[i], list[s]);
        }
    }
}


/*
//second method
void permutation(int list[], int beg, int end)
{
	int i, j;
	if(beg > end)
	{
		for(i=0; i<=end; ++i)
			cout << list[i];
		cout << endl;
	}
	else
	{
		for(j=beg; j<=end; ++j)
		{
			swap(list[beg],list[j]);
			permutation(list, beg+1, end);
			swap(list[beg],list[j]);
		}
		
	}
}
*/
int main(void)
{
    int list[3] = {1, 2, 3};
    permutation(list, 0, 2, printList);

    return 0;
}

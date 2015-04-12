/*
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main()
{
	int n, index;
	string id, title, author, word, publisher, year, q;
	cin>>n;
	cin.ignore();

    //build map
    map<string,set<string> > queryMap[5];
    while(n--)
    {
        getline(cin, id);
        getline(cin, title);
        queryMap[0][title].insert(id);
        getline(cin, author);
        queryMap[1][author].insert(id);
        getline(cin, word);
        istringstream istr(word);
        while(istr>>word)
            queryMap[2][word].insert(id);
        getline(cin, publisher);
        queryMap[3][publisher].insert(id);
        getline(cin, year);
        queryMap[4][year].insert(id);
		}

		//query
		int m;
		cin>>m;
		cin.ignore();
		while(m--)
		{
		    getline(cin, title);
            cout<<title<<endl;
            q= title.substr(3, title.size() - 3);
			index = title[0] - '1';
			if(queryMap[index][q].size() != 0)
			{
				for(set<string>::iterator it = queryMap[index][q].begin(); it != queryMap[index][q].end(); it++)
					cout<<*it<<endl;
			}
			else
                cout<<"Not Found"<<endl;;

		}
	return 0;
}
*/

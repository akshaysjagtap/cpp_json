#include<iostream>
#include<cstring>
#include<jsoncpp/json/json.h>

using namespace std;
using namespace Json;
int main()
{
	Value r,c1,c2,c3;
	
	c1["k1"] = "v1";
	c2["k2"] = "v2";
	c3["10"]="0";
	c3["11"]="1";
	c3["12"]="2";
	c3["13"]="3";
	c3["14"]="4";
	c3["15"]="5";
	c3["16"]="6";
	c3["17"]="7";
	c3["18"]="8";
	c3["19"]="9";
	r.append(c1);
	c3[""]=r;
	//c3[""]="blank";
	vector<string> v = c3.getMemberNames();// getMemberNames is used to fetch keys from json object
	int sz = v.size();
	for(int i=0;i<sz;i++)
	{
		if(c3[v[i]].isArray()) 
			cout << "Array" << endl;
		else
			cout << "Object" << endl;
	}
	return 0;
}

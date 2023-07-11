int main()
{
	string s1;
	string s2;
	
	cin>>s1;
	cin>>s2;
	
	int l1=s1.length();
	int l2=s2.length();
	
	if(l1!=l2)
	{
		cout<<"No"<<endl;
	}
	
	else
	{
		string temp=s1+s1;
		if(temp.find(s2)!=string::npos)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}

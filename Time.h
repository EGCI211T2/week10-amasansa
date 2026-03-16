struct Time{
	int m,h,s;
};

//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions

void getTime(Time &t)
{
	cin >>t.h >>t.m >>t.s;
}

Time subtract(Time t2,Time t1)
{
	int sec1=(t1.h*3600)+(t1.m*60)+t1.s;
	int sec2=(t2.h*3600)+(t2.m*60)+t2.s;
	int diff=sec2-sec1;

	if(diff<0)
	{
		diff+=86400; //24hrs
	}
	Time t3;
	t3.h=diff/3600;
	diff%=3600;
	t3.m=diff/60;
	diff%=60;
	t3.s=diff;

	return t3;
}

void display(Time t3)
{
	cout <<setfill('0') <<setw(2) <<t3.h <<":" <<setfill('0') <<setw(2) <<t3.m <<":" <<setfill('0') <<setw(2) <<t3.s <<endl;
}

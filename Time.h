class Time{
	private:
		int m,h,s;
	public:
		void set_time(int,int,int);
		void getTime();
		void display();
		Time subtract(Time);
};

void Time::set_time(int a=0,int b=0,int c=0){
	h=(a>=0&&a<24)?a:0;
	m=(b>=0&&b<60)?b:0;
	s=(c>=0&&c<60)?c:0;
}

void Time::getTime()
{
	cout << "input time : ";
	cin >>h >>m >>s;
	set_time(h,m,s);
}

Time Time::subtract(Time t1)
{
	int sec1=(t1.h*3600)+(t1.m*60)+t1.s;
	int sec2=(this->h*3600)+(this->m*60)+this->s;
	// int sec2=(t2.h*3600)+(t2.m*60)+t2.s;
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

void Time::display()
{
	cout <<setfill('0') <<setw(2) <<h <<":" <<setfill('0') <<setw(2) <<m <<":" <<setfill('0') <<setw(2) <<s <<endl;
}

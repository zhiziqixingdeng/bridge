#include <iostream>
using namespace std;
string str;
struct user{
	string name;
	bool flag;
}s[4];
int cnt;//总牌点
void td(string str){
	if(s[1].flag==true){
		for(int i=0;i<str.length();i++){
			if(str[i]=='A'){
				cnt+=4;
			}
			else if(str[i]=='K'){
				cnt+=3;
			}
			else if(str[i]=='Q'){
				cnt+=2;
			}
			else if(str[i]=='J'){
				cnt+=1;
			}
		}
	}
	if(s[2].flag==true){
		if(str.length()>4){
			cnt+=str.length()-4;
		}
	}
	if(s[3].flag==true){
		if(str.length()==2){
			cnt+=1;
		}
		if(str.length()==1){
			cnt+=3;
		}
	}
	return;
}
int main(){
	freopen("设置.txt","r",stdin);
	cin>>str;//除掉第一条提示
	for(int i=1;i<=3;i++){
		cin>>s[i].name>>s[i].flag;
	}
	freopen("CON","r",stdin);
	cout<<"S:";
	cin>>str;
	td(str);
	cout<<"H:";
	cin>>str;
	td(str);
	cout<<"C:";
	cin>>str;
	td(str);
	cout<<"D:";
	cin>>str;
	td(str);
	cout<<"总牌点:"<<cnt;
	return 0;
}

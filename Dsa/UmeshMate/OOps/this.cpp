#include<iostream>
using namespace std;
class player
{
  int score;
  int age;
  public:
  void getscore(int score)
  {
    this->score=score;
  }
  void getage(int age)
  {
    this->age=age;
  }

  int disscore()
  {
    return score;
  }
  int disage()
  {
    return age;
  }
};
int addscore(player a,player b)
{
    return a.disscore()+b.disscore();
}
player greatest(player a,player b)
{
  if(a.disscore()>b.disscore())
    return a;
  else
    return b;       
}
int main()
{
  player p,r;
  int ps,pa,rs,ra;

  cout<<"Enter score:";
  cin>>ps;
  cout<<"Enter age:";
  cin>>pa;
  p.getscore(ps);
  p.getage(pa);

  cout<<"Enter score:";
  cin>>rs;
  cout<<"Enter age:";
  cin>>ra;
  r.getscore(rs);
  r.getage(ra);

  cout<<"Addition of score="<<addscore(p,r)<<endl;
  player u=greatest(p,r);
  cout<<"maximum score="<<u.disscore();
}
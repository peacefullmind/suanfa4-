//Insertion Sort

#include<fstream>
#include<string>
#include<iostream>
using namespace std;

static int oN[16];
static unsigned long long int odb[16];
static unsigned long long int otime[16];

void InsertionSort(int a[], int len,int flag)
{
    unsigned long long int time=0;//计算时间
    unsigned long long int db=0;//对比次数
    for (int i = 0; i < len; i++)
    {   time++;
        int key = a[i];
        time++;
        int j = i - 1;
        time++;
        while (j >= 0 && a[j] > key)  // 如果从大到小则修改为 a[j]<key
        {
            db++;
            time++;//对应的是进入条件的判断
            a[j + 1] = a[j];
            time++;
            --j;
            time++;
        }
        a[j + 1] = key;
        time++;
    }


    cout << "db num : " <<db << endl;
    cout << "run time num : " <<time << endl;
    oN[flag]=len;
    odb[flag]=db;
    otime[flag]=time;

}

void readAndSort(const char* filename,int len,int flag){
    std::fstream mf(filename, std::ios_base::in);
    int a;
    //txt中数据长度；
    int n[len];
    for(int i=0;i<=len-1;i++){
        mf >> a;
        n[i]=a;
    }
    mf.close();
    InsertionSort(n, len,flag);
}


int main()
{

//============================================================================================
    readAndSort("D:\\PAIXUC++\\txtfile\\RAND-10000.txt",10000,0);
    readAndSort("D:\\PAIXUC++\\txtfile\\RAND-20000.txt",20000,1);
    readAndSort("D:\\PAIXUC++\\txtfile\\RAND-40000.txt",40000,2);
    readAndSort("D:\\PAIXUC++\\txtfile\\RAND-80000.txt",80000,3);
    readAndSort("D:\\PAIXUC++\\txtfile\\SORTED-10000.txt",10000,4);
    readAndSort("D:\\PAIXUC++\\txtfile\\SORTED-20000.txt",20000,5);
    readAndSort("D:\\PAIXUC++\\txtfile\\SORTED-40000.txt",40000,6);
    readAndSort("D:\\PAIXUC++\\txtfile\\SORTED-80000.txt",80000,7);
    readAndSort("D:\\PAIXUC++\\txtfile\\REVERSED-10000.txt",10000,8);
    readAndSort("D:\\PAIXUC++\\txtfile\\REVERSED-20000.txt",20000,9);
    readAndSort("D:\\PAIXUC++\\txtfile\\REVERSED-40000.txt",40000,10);
    readAndSort("D:\\PAIXUC++\\txtfile\\REVERSED-80000.txt",80000,11);
    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-10000.txt",10000,12);
    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-20000.txt",20000,13);
    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-40000.txt",40000,14);
    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-80000.txt",80000,15);


//============================================================================================
//输出txt
    ofstream myout("D:\\output.txt");
    for(int i=0;i<=15;i++){//15
        myout<<oN[i]<<" "<<odb[i]<<" "<<otime[i] << endl;
    }
    myout.close();
    return 0;
}

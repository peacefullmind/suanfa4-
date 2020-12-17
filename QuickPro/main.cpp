
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

static int oN[16];
static unsigned long long int odb[16];
static unsigned long long int otime[16];
static unsigned long long int time;//计算时间
static unsigned long long int db;//对比次数

void swap(int array[],int i,int j){
    int temp=array[i];
    time++;
    array[i]=array[j];
    time++;
    array[j]=temp;
    time++;

}



int Partition(int array[], int low, int high)
{
    /*三数中值分割法*/

    int m = low + (high - low) / 2;//数组中间元素的下标
    time++;
    if (array[low]>array[high])   //保证左端较小
        time++;
        db++;
        swap(array, low, high);
    if (array[m] > array[high])   //保证中间较小
        time++;
        db++;
        swap(array, high, m);
    if (array[low] > array[m])
        time++;
        db++;
        swap(array, m, low);      //保证左端最小
    //此时array[low]已经为整个序列左中右三个关键字的中间值
    int pivotkey = array[low];
    time++;
    int i = low, j = high;
    time++;
    time++;
    while(i<j) //从表的两端交替向中间扫描,当没有相遇
    {
        time++;
        db++;
        while (array[j] >= pivotkey&&i<j){
            time=time+2;
            db=db+2;
            j--;
            time++;
        }
        while (array[i] <= pivotkey&&i<j){
            time=time+2;
            db=db+2;
            i++;
            time++;
        }
        if (i<j)
        {
            time++;
            db++;
            swap(array, i, j);
        }
    }
    //最终将基准数归位
    swap(array, low, i);
    return i;              //返回枢轴所在的位置


}




void QuickSort(int a[], int low, int high,int flag)
{
    if (low < high)
    {
        time++;
        db++;
        int q = Partition(a, low, high);
        QuickSort(a, low, q - 1,flag);
        QuickSort(a, q + 1, high,flag);
    }
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
    time=0;
    db=0;
    QuickSort(n, 0,len-1,flag);
    cout<<filename<<endl;
    cout << "len : " <<len << endl;
    cout << "db num : " <<db << endl;
    cout << "run time num : " <<time << endl;
    oN[flag]=len;
    odb[flag]=db;
    otime[flag]=time;
}


int main() {



//============================================================================================
    readAndSort("D:\\PAIXUC++\\txtfile\\RAND-10000.txt",10000,0);
    readAndSort("D:\\PAIXUC++\\txtfile\\RAND-20000.txt",20000,1);
    readAndSort("D:\\PAIXUC++\\txtfile\\RAND-40000.txt",40000,2);
    readAndSort("D:\\PAIXUC++\\txtfile\\RAND-80000.txt",80000,3);
    readAndSort("D:\\PAIXUC++\\txtfile\\SORTED-10000.txt",10000,4);
    readAndSort("D:\\PAIXUC++\\txtfile\\SORTED-20000.txt",20000,5);
//    readAndSort("D:\\PAIXUC++\\txtfile\\SORTED-40000.txt",40000,6);//here
//    readAndSort("D:\\PAIXUC++\\txtfile\\SORTED-80000.txt",80000,7);
    readAndSort("D:\\PAIXUC++\\txtfile\\REVERSED-10000.txt",10000,8);
    readAndSort("D:\\PAIXUC++\\txtfile\\REVERSED-20000.txt",20000,9);
    readAndSort("D:\\PAIXUC++\\txtfile\\REVERSED-40000.txt",40000,10);
//    readAndSort("D:\\PAIXUC++\\txtfile\\REVERSED-80000.txt",80000,11);//here
    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-10000.txt",10000,12);
    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-20000.txt",20000,13);
//    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-40000.txt",40000,14); //her
//    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-80000.txt",80000,15); //here


//============================================================================================
//输出txt
    ofstream myout("D:\\outputquick.txt");
    for(int i=0;i<=5;i++){//15
        myout<<oN[i]<<" "<<odb[i]<<" "<<otime[i] << endl;
    }
    for(int i=8;i<=10;i++){//15
        myout<<oN[i]<<" "<<odb[i]<<" "<<otime[i] << endl;
    }
    for(int i=12;i<=13;i++){//15
        myout<<oN[i]<<" "<<odb[i]<<" "<<otime[i] << endl;
    }
    myout.close();
    return 0;
}


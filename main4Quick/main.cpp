
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

static int oN[16];
static unsigned long long int odb[16];
static unsigned long long int otime[16];
static int time;
static int db;

void swap(int array[],int i,int j){
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
    time=time+3;

}



int Partition(int array[], int low, int high)
{
    int randomIndex = rand() % (high - low) + low;//取数组中随机下标
    time++;
    swap(array, randomIndex, low);                //与第一个数交换
    int pivotkey = array[low];
    time++;

    int i = low, j = high;
    time=time+2;
    while(i<j) //从表的两端交替向中间扫描,当没有相遇
    {
        time++;
        db++;
        while (array[j] >= pivotkey&&i<j){
            db=db+2;
            j--;
            time=time+3;
        }
        while (array[i] <= pivotkey&&i<j){
            db=db+2;
            i++;
            time=time+3;
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

    cout << "db num : " <<db << endl;
    cout << "run time num : " <<time << endl;
    oN[flag]=len;
    odb[flag]=db;
    otime[flag]=time;
}


int main() {
//    //读入txt中数据
//    std::fstream myfile("D:\\PAIXUC++\\txtfile\\RAND-10000.txt", std::ios_base::in);
//    int a;
//    //txt中数据长度；
//    int N = 20;
//    int n[N];
//    for (int i = 0; i <= N - 1; i++) {
//        myfile >> a;
//        n[i] = a;
//    }
//    myfile.close();
//    //排序前
//    //输出数组数据，验证数据数据读入成功
//    for (int i = 0; i <= N - 1; i++) {
//        cout << n[i] << endl;
//    }
//    QuickSort(n, 0, N - 1);
//    cout << "======================================================================================" << endl;
//    //排序后
//    //输出排序后的数组数据，验证结果
//    for (int i = 0; i <= N - 1; i++) {
//        cout << n[i] << endl;


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
//    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-40000.txt",40000,14);
//    readAndSort("D:\\PAIXUC++\\txtfile\\IDENTICAL-80000.txt",80000,15);


//============================================================================================
//输出txt
    ofstream myout("D:\\output4.txt");
    for(int i=0;i<=15-2;i++){//15
        myout<<oN[i]<<" "<<odb[i]<<" "<<otime[i] << endl;
    }
    myout.close();
    return 0;
}


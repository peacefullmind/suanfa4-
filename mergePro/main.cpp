
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

static int oN[16];
static unsigned long long int odb[16];
static unsigned long long int otime[16];
// 合并数组，排好序，然后在拷贝到原来的数组array

static unsigned long long int time;//计算时间
static unsigned long long int db;//对比次数
void MergeArray(int array[], int start, int end ,int mid, int temp[]) {
    int i = start;
    time++;
    int j =  mid + 1;
    time++;
    int k = 0;
    time++;
    while (i <= mid && j <= end ) {
        time++;
        time++;
        db++;
        db++;
        if (array[i] < array[j]) {
            time++;
            db++;
            temp[k++] = array[i++];
            time++;
        }else {
            time++;
            db++;
            temp[k++] = array[j++];
            time++;
        }
    }
    while (i <= mid) {
        time++;
        db++;
        temp[k++] = array[i++];
        time++;
    }
    while (j <= end) {
        time++;
        db++;
        temp[k++] = array[j++];
        time++;
    }
    for (int i = 0; i < k; i ++) {
        time++;
        db++;
        array[start + i] = temp[i];
        time++;
    }

}
// 归并排序，将数组前半部分后半部分分成最小单元，然后在合并
void MergeSort(int array[], int start,  int end, int temp[]) {
    if(start < end) {
        time++;
        db++;
        int mid = (start + end)/ 2;
        time++;
        MergeSort(array, start, mid, temp);
        MergeSort(array, mid + 1, end, temp);
        MergeArray(array, start, end, mid, temp);
    }

}
// 在这里创建临时数组，节省内存开销，因为以后的temp都是在递归李使用的。
void MergeSort(int array[], int len,int flag) {
    time=0;
    db=0;
    int start = 0;
    time++;
    int end = len - 1;
    time++;
    int *temp = new int[len];
    time++;
    MergeSort(array, start, end, temp);

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
    MergeSort(n, len,flag);
}






int main() {


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
    ofstream myout("D:\\outputmerge.txt");
    for(int i=0;i<=15;i++){//15
        myout<<oN[i]<<" "<<odb[i]<<" "<<otime[i] << endl;
    }
    myout.close();
    return 0;

}

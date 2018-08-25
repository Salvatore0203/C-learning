#include <iostream>

using namespace std;

/**           公式

        //外层循环控制行（行数，换行）
        //内层循环控制列（列数，列的图形）

        //打印图案
        //双循环（嵌套循环）
int main(){
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}
*/
/**      扩展1


           *
          ***
         *****
        *******
         *****
          ***
           *
                   图形一：井号三角
                    图形二：星形三角

        //打印
int main(){
    //上半部分
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<= 2-i ; j++){
            cout << " " ;
        }
        for(int k=0 ; k<= 2*i ; k++){
           // cout << (char)('A' + i);
           cout << "*" ;
        }
        cout << endl;
    }

    //下半部分
     for(int l=0 ; l<3 ; l++){
        for(int m=0 ; m <= l ; m++){
            cout << " " ;
        }
        for(int n=0 ; n <= 4-2*l ; n++){
           // cout << (char)('E' + l);
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}


/**            扩展2

                *
               * *
              *   *
             *     *
              *   *
               * *
                *
*/
int main(){
    //上半部分
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<= 2-i ; j++){
            cout << " " ;
        }
        for(int k=0 ; k<= 2*i ; k++){
           //k是极值的情况下打印星号，其他打印空格
           if(k == 0 || k == 2*i){
                cout << "*";
           }else{
                cout << " ";
           }
        }
        cout << endl;
    }

    //下半部分
     for(int l=0 ; l<3 ; l++){
        for(int m=0 ; m <= l ; m++){
            cout << " " ;
        }
        for(int n=0 ; n <= 4-2*l ; n++){
           //n是极值的情况下打印星号，其他打印空格
           if(n == 0 || n == 4-2*l){
                cout << "*" ;
           }else{
               cout << " " ;
           }
        }
        cout << endl;
    }
    return 0;
}
